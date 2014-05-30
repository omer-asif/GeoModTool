//---------------------------------------------------------------------------
#include "stdafx.h"
//---------------------------------------------------------------------------
#include "AssignmentTwo.h"
//---------------------------------------------------------------------------
#include "Properties.h"
#include "GLGeometryViewer.h"
#include "GeoXOutput.h"
#include "DynamicLinearAlgebra.h"
//---------------------------------------------------------------------------




IMPLEMENT_GEOX_CLASS( AssignmentTwo, 0)
{
    BEGIN_CLASS_INIT( AssignmentTwo );
	ADD_NOARGS_METHOD(AssignmentTwo::computeBezierCurve);
	ADD_NOARGS_METHOD(AssignmentTwo::computeCurvature);
	ADD_SEPARATOR("Enter Number of Sample Points:");
	ADD_INT32_PROP( samplePoints, 0 );
    ADD_FLOAT32_PROP( tValue, 0 );                 
}

QWidget* AssignmentTwo::createViewer()
{
    viewer = new GLGeometryViewer();
    return viewer;
}

AssignmentTwo::AssignmentTwo()
{
	samplePoints=10;
	tValue=0.5;
	controlPoints=0;
	selected = -1;
    viewer = NULL;
}

AssignmentTwo::~AssignmentTwo() {}

void AssignmentTwo::computeBezierCurve(){

	curvePoints.clear();
	points.clear();
	viewer->refresh();
	controlPoints = viewer->getNumberOfPoints();
	
	if(controlPoints>0){

		for(int i=0;i<controlPoints;i++){
			points.push_back(viewer->getPoint(i));
		}
		output<<" POINTS: "<<controlPoints<<" SIZE: "<<points.size()<<"\n";
	
		//vector<Point2D> v;
		float t = 0.0;
		float n = (float)samplePoints;
		float os=0.0;
		if(samplePoints>0){
			os = (float)(1.0/(n+1.0));
		}
	
		deCastaljau(controlPoints-1,0,tValue);
		for(int k=0;k<samplePoints;k++){
			curvePoints.push_back(deCastaljau(controlPoints-1,0,t));
			t+=os;
		}
	

		/*******      CURVE USING BERNSTEIN BASIS  ******/
		/*t = 0.0;
		Point2D pp = makeVector2f(0,0);
		for(int k=0;k<samplePoints;k++){
		
			for(int m=0;m<controlPoints;m++){
				float basis = computeBernsteinBasis(controlPoints-1,m,t);
				pp.position+= points[m].position.componentProduct(makeVector2f(basis,basis));
			}

			pp.color = makeVector4f(1.0f, 1.0f, 1.0f, 1.0f);
			viewer->addPoint(pp);
			pp.position = makeVector2f(0.0,0.0);
			t+=os;
		}
		viewer->refresh();*/

		/*******      END  ******/



		for(int k=0;k<samplePoints;k++){
			viewer->addPoint(curvePoints[k]);
		}
		viewer->refresh();
	}
}

float AssignmentTwo::computeNChooseI(int n, int i){
	if(i == 0 || i == n){
		return 1;
	}
	else{
		return computeNChooseI(n-1, i-1) + computeNChooseI(n-1, i);
	
	}
		
}

float AssignmentTwo::computeBernsteinBasis(int n, int j, float t){

	float b = computeNChooseI(n,j) * (float)pow(static_cast<float>(1.0-t),static_cast<float>(n-j)) * (float)pow(t ,static_cast<float>(j));

	return b;
}

Point2D AssignmentTwo::deCastaljau(int i, int j, float t){
	
	if(i==0){
		return points[j];
	}
	else{
		Point2D lwp = deCastaljau(i-1,j,t);
		Point2D gwp = deCastaljau(i-1,j+1,t);
		
		if(t==tValue){
			int p1Handle=0;
			int p2Handle=0;
			viewer->addLine(lwp.position,gwp.position);
		}
		Point2D result = lwp.position.componentProduct(makeVector2f(1.0-t, 1.0-t))+gwp.position.componentProduct(makeVector2f(t, t));
		
		return result;
	}

}
void AssignmentTwo::computeCurvature(){
	
	if(curvePoints.size() == 0){
		computeBezierCurve();
	}

	// Calculate First Derivative of Curve at Control Points

	if(controlPoints>0 && samplePoints>0){

		vector<Point2D> firstDs;
		Point2D fd = Point2D(0,0);
		float t = 0.0;
		float n = (float) samplePoints;
		float os = 0.0;
		if(samplePoints>0){
			os = (float)(1.0/(n-1));
		}
		for(int j=0;j<samplePoints;j++){
			for(int k=0;k<=controlPoints-2;k++){
				fd.position += ((points[k+1].position - points[k].position).componentProduct(makeVector2f(controlPoints-1,controlPoints-1)).componentProduct(makeVector2f(computeBernsteinBasis(controlPoints-2,k,t),computeBernsteinBasis(controlPoints-2,k,t))));
			}
			t+=os;
			firstDs.push_back(fd);
			fd = Point2D(0,0);
		}

		// Calculate Second Derivative of Curve at Control Points
		vector<Point2D> secondDs;
		fd = Point2D(0,0);
		t = 0.0;
		for(int j=0;j<samplePoints;j++){
			for(int k=0;k<=controlPoints-3;k++){
				fd.position += ((firstDs[k+1].position - firstDs[k].position).componentProduct(makeVector2f(controlPoints-2,controlPoints-2)).componentProduct(makeVector2f(computeBernsteinBasis(controlPoints-3,k,t),computeBernsteinBasis(controlPoints-3,k,t))));
			}
			t+=os;
			secondDs.push_back(fd);
			fd = Point2D(0,0);
		}

		// Calculating Curvatures
		vector<float> curvatures;

		float curvature=0;
		Matrix2f rotate90=makeMatrix2f(0, -1, 1, 0);
		for(int j=0;j<samplePoints;j++){
		
			curvature = (secondDs[j].position * (rotate90*firstDs[j].position))/(pow((float)firstDs[j].position.getSqrNorm(),1.5f));
			curvatures.push_back(curvature);
		}
		//output<<"CURVATURES ARE:  ";
		for(int k=0;k<samplePoints;k++){
			output<<curvatures[k]<<" : ";
			if(curvatures[k]>0)
				curvePoints[k].color = makeVector4f(1.0f, 0.0f, 0.0f, 1.0f);
			else if(curvatures[k]<0)
				curvePoints[k].color = makeVector4f(0.0f, 0.0f, 1.0f, 1.0f);
			else if(curvatures[k]==0)
				curvePoints[k].color = makeVector4f(1.0f, 1.0f, 1.0f, 1.0f);
			viewer->addPoint(curvePoints[k]);
			//viewer->addLine(v[k].position,v[k+1].position);
		}
		viewer->refresh();
	}
}




