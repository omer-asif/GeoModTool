//---------------------------------------------------------------------------
#include "stdafx.h"
//---------------------------------------------------------------------------
#include "PolynomialInterpolation.h"
//---------------------------------------------------------------------------
#include "Properties.h"
#include "GLGeometryViewer.h"
#include "GeoXOutput.h"
#include "DynamicLinearAlgebra.h"
//---------------------------------------------------------------------------

IMPLEMENT_GEOX_CLASS(PolynomialInterpolation, 0)
{
	BEGIN_CLASS_INIT(PolynomialInterpolation);
	ADD_SEPARATOR("Number of Points:");
	ADD_INT32_PROP(noOfPoints, 0);
	ADD_SEPARATOR("Value of a:");
	ADD_FLOAT32_PROP(a, 0);
	ADD_SEPARATOR("Selectd Point");
	ADD_INT32_PROP(selectedPoint, 0);
	ADD_SEPARATOR("Select a Degree");
	ADD_INT32_PROP(selectedDegree, 0);
	ADD_NOARGS_METHOD(PolynomialInterpolation::drawPoints);
	ADD_NOARGS_METHOD(PolynomialInterpolation::drawTangentAndNormal);
	ADD_NOARGS_METHOD(PolynomialInterpolation::interpolatePoints);
	ADD_NOARGS_METHOD(PolynomialInterpolation::approximatePolynomial);



}

QWidget* PolynomialInterpolation::createViewer()
{
	viewer = new GLGeometryViewer();
	return viewer;
}

PolynomialInterpolation::PolynomialInterpolation()
{
	viewer = NULL;
	noOfPoints = 11;
	a = 1.0f;
	selectedPoint = 3;
	selectedDegree = 2;
	
}

PolynomialInterpolation::~PolynomialInterpolation() {}

void PolynomialInterpolation::drawPoints()
{
	viewer->clear();
	p.clear();
	pHandle.clear();

	if (noOfPoints <= 1)
	{
		output << "Please a number greater than 1 for Points!" << "\n";
			return ;
	}

	double step = 4.0 / (noOfPoints-1);

	
	output << "step%d" << step << "\n";
	double xVal = -2.0f;
	for (int i = 0; i <noOfPoints; i++)
	{
		p.push_back(Point2D(xVal, a*pow(xVal ,2.0f)));
		pHandle.push_back(viewer->addPoint(p.back()));
		xVal = xVal + step;
		
		
	}
	
	/*
	for (unsigned int i = 0; i < pHandle.size()-1; i++)
	{
		
		
		Line  l;
		l.vertices[0] = pHandle[i];
		l.vertices[1] = pHandle[(i + 1)];
		viewer->addLine(l);
	}
	*/
	
	

	//////////////////////////////////////////////////

	// display changes
	viewer->refresh();
}

void PolynomialInterpolation::drawTangentAndNormal()
{
	int viewPoints = p.size();// viewer->getNumberOfPoints();
	for (int i = 0; i < viewPoints;i++)
	{
		p[i] = viewer->getPoint(i);
	}
	
	if (selectedPoint >= noOfPoints)
	{
		output << "Please specify a number less than total number of points" << "\n";
		return;
	}
	else if (p.empty())
	{
		output << "Please draw points first" << "\n";
		return;
	}
	Point2D tangent;
	int tangentHandler;
	
	if(selectedPoint ==0)
		tangent.position = (p[selectedPoint+1].position - p[selectedPoint].position);
	else if(selectedPoint ==p.size()-1)	
		tangent.position = (p[selectedPoint].position - p[selectedPoint -1].position);
	else
		tangent.position = (p[selectedPoint + 1].position - p[selectedPoint - 1].position);
		
		//tangent.position = (viewer->getPoint(4).position - viewer->getPoint(2).position);

	

	

	tangent.position.normalize();
	tangent.position = tangent.position+p[selectedPoint].position;
	tangent.color = makeVector4f(1.0, .31, .46, 0.96);
	
	tangentHandler= viewer->addPoint(tangent);

	Line l;
	l.vertices[0] = pHandle[selectedPoint];
	l.vertices[1] = tangentHandler;
	l.color = makeVector4f(1.0, 0.0, 0.64, 1.0);
	
	viewer->addLine(l);
	
	Point2D normal;
	int normalHandler;

	Matrix2f flip=makeMatrix2f(0, -1, 1, 0);
	normal.position = p[selectedPoint].position + (flip*(tangent.position - p[selectedPoint].position ));
	normal.color = makeVector4f(1.0f,0.0f, 1.0f, 1.0f);
	//normal.position.normalize();
	normalHandler = viewer->addPoint(normal);

	output << "normal postion is : " << normal.position << "  tangent position is:  " << tangent.position << "\n";
	
	l.vertices[0] = pHandle[selectedPoint];
	l.vertices[1] = normalHandler;
	l.color = makeVector4f(1.0f, 0.40f, 0.0f, 1.0f);

	viewer->addLine(l);
	viewer->refresh();
}
void PolynomialInterpolation::interpolatePoints()
{
	
	int viewPoints = p.size();//viewer->getNumberOfPoints();
	//output << "number of points in viewer"<< viewPoints << "\n";
	
	for (int i = 0; i < viewPoints; i++)
	{
		p[i] = viewer->getPoint(i);
	}
	if (noOfPoints > viewPoints)
	{
		output << "Draw the points to see the new results, Yo!" << "\n";
	}
	if (p.empty())
	{
		output << "YO! Draw some points first!" << "\n";
		return;
	}
	int basis = viewPoints;
	DynamicMatrix<float> M(basis,basis, false);// have a square matrix .. 
	DynamicVector<float> y(basis);
	for (int i = 0; i < viewPoints; i++)
	{

		for (int j = 0; j < basis; j++)
		{
			M[j][i] = pow(p[i].position[0], j);
		}

		y[i] = p[i].position[1];

	}
	DynamicVector<float> lambdas(basis);
	lambdas = invertMatrix(M)*y;
	//output<< M.toString()<< "\n";
	output << lambdas.toString() << "\n";
	drawLines(lambdas);
}
void PolynomialInterpolation::approximatePolynomial()
{
	int viewPoints = p.size();// viewer->getNumberOfPoints();
	for (int i = 0; i < viewPoints; i++)
	{
		p[i] = viewer->getPoint(i);
	}
	if (noOfPoints!= viewPoints)
	{
		output << "Draw the points to see the new results, Yo!" << "\n";
	}

	if (p.empty())
	{
		output << "YO! Draw some points first! I am saying it for nicely last time!" << "\n";
		return;
	}
	if (selectedDegree >= viewPoints)
	{
		output << "Yo can't handle this kind of degree/points combo Yo! " << "\n";
		return;
	}
	int basis = selectedDegree + 1;
	DynamicMatrix<float> M(basis, viewPoints, false);
	DynamicVector<float> y(viewPoints);
	for (unsigned int i = 0; i < p.size(); i++)
	{

		for (int j = 0; j < basis; j++)
		{
			M[j][i] = pow(p[i].position[0], j);
		}

		y[i] = p[i].position[1];

	}
	DynamicVector<float> lambdas(basis);
	lambdas = invertMatrix((M.transpose()*M))*(M.transpose()*y);
	//output<< M.toString()<< "\n";
	output << lambdas.toString() << "\n";
	drawLines(lambdas);
	
}
void PolynomialInterpolation::drawLines(DynamicVector<float> lam)
{
	float j = 0.0f;
	Line l;
	vector<Point2D> refPoints;
	vector<double> values;
	double temp = 0.0;
	float step = 0.125f;
	for (float i = -5.0; i <= 5.0; i += step)
	{
		for (unsigned int k = 0; k < lam.size(); k++)
		{
			temp = temp + (lam[k] * (pow(i, k)));

		}
		//output << temp << "\n";
		values.push_back(temp);
		temp = 0.0;

	}
	float xVal = -5.0;
	for (unsigned int i = 0; i < values.size() - 1; i++)
	{

		viewer->addLine(makeVector2f(xVal, values[i]), makeVector2f(xVal + step, values[i + 1]));
		xVal += step;
	}
	viewer->refresh();
}
