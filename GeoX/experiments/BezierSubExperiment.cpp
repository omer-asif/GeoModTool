//---------------------------------------------------------------------------
#include "stdafx.h"
//---------------------------------------------------------------------------
#include "BezierSubExperiment.h"
//---------------------------------------------------------------------------
#include "Properties.h"
#include "GLGeometryViewer.h"
#include "GeoXOutput.h"
//#include "GeoXGLWidget.h"
//---------------------------------------------------------------------------

IMPLEMENT_GEOX_CLASS( BezierSubExperiment, 0)
{
    BEGIN_CLASS_INIT( BezierSubExperiment );
	ADD_SEPARATOR("Number of Sample Point")
	ADD_INT32_PROP( nSamplePoint, 0 )
	ADD_SEPARATOR("t1")
	ADD_FLOAT32_PROP( t1, 0 )
	ADD_SEPARATOR("t2")
	ADD_FLOAT32_PROP( t2, 0 )

	ADD_NOARGS_METHOD(BezierSubExperiment::DrawCurve)
}

QWidget* BezierSubExperiment::createViewer()
{
    viewer = new GLGeometryViewer();
    return viewer;
}

BezierSubExperiment::BezierSubExperiment()
{
    viewer = NULL;
	nSamplePoint = 100;
	t1 = 0.5;
	t2 = 0.75;
}

BezierSubExperiment::~BezierSubExperiment() {}

namespace 
{
	void BezierSubdivision(const Point2D * bInput, Point2D * left, Point2D * right, const int n, const float t)
	{
		Point2D * b; b = new Point2D[n + 1];
		for (int i = 0; i < n + 1; i++)
			b[i] = bInput[i];
		
		left[0] = bInput[0];
		right[n] = bInput[n];			
		for (int r = 1; r <= n; r++)
		{
			for (int i = 0; i <= n - r; i++)
			{
				b[i].position.data()[0] = (1 - t) * b[i].position.data()[0] + t * b[i + 1].position.data()[0];
				b[i].position.data()[1] = (1 - t) * b[i].position.data()[1] + t * b[i + 1].position.data()[1];
			}
			left[r] = b[0];
			right[n - r] = b[n - r];
		}	
		delete[] b;
	}

	void BezierCurvePoints(const Point2D * bInput, Point2D * bn, const int nSample, const int n)
	{
		float t = 0;
		Point2D * b; b = new Point2D[n + 1];

		for (int j = 0; j < nSample + 2; j++)
		{
			for (int i = 0; i < n + 1; i++)
				b[i] = bInput[i];
			t = (float) j / (nSample + 1);
			for (int r = 1; r <= n; r++)
			{
				for (int i = 0; i <= n - r; i++)
				{
					b[i].position.data()[0] = (1 - t) * b[i].position.data()[0] + t * b[i + 1].position.data()[0];
					b[i].position.data()[1] = (1 - t) * b[i].position.data()[1] + t * b[i + 1].position.data()[1];
				}
			}
			bn[j] = b[0];
		}
	}
}
void BezierSubExperiment::DrawCurve()
{
	int n = viewer->getNumberOfPoints() - 1;
	
	// make a copy of original points //
	Point2D * bInput; bInput = new Point2D[n + 1];
	for (int i = 0; i < n + 1; i++)
		bInput[i] = viewer->getPoint(i);
	
	// draw Bezier Polygon //
	if (n > 2)
		for (int i = 0; i < n; i++)
		{
			Point2D p0 = viewer->getPoint(i);
			Point2D p1 = viewer->getPoint(i+1);
			viewer->addLine(p0.position, p1.position);
		}
	else
	{
		output << "Place at least two points!" << "\n";
		return;
	}
		

	// draw Bezier curve //
	Point2D * bn; bn = new Point2D[nSamplePoint + 2];
	BezierCurvePoints(bInput, bn, nSamplePoint, n);

	for (int j = 0; j < nSamplePoint + 1; j++)
	{
		Point2D p0 = bn[j];
		Point2D p1 = bn[j + 1];
		BezierSubExperiment::viewer->addLine(p0.position, p1.position);
	}		

	// subdivision left //
	Point2D * bLeft;  bLeft  = new Point2D[n + 1]; 
	Point2D * bRight; bRight = new Point2D[n + 1];	
	BezierSubdivision(bInput, bLeft, bRight, n, t1);

	// draw first point (t1) //
	Point2D firstP = bLeft[n];
	firstP.color = makeVector4f(0.5,1,1,1); firstP.size = 8;
	viewer->addPoint(firstP);
	
	// draw left Bezier Polygon //
	for (int i = 0; i < n; i++)
	{
		Point2D p0 = bLeft[i];
		Point2D p1 = bLeft[i + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(1.0f,0.0f,0.0f,0.5f),2);
	}
	// draw left Bezier curve //
	Point2D * bnLeft; bnLeft = new Point2D[nSamplePoint + 2];
	BezierCurvePoints(bLeft, bnLeft, nSamplePoint, n);

	for (int j = 0; j < nSamplePoint + 1; j++)
	{
		Point2D p0 = bnLeft[j];
		Point2D p1 = bnLeft[j + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(1.0f,0.0f,0.0f,1.0f),2);
	}

	// subdivision right //
	Point2D * bRight0;  bRight0 = new Point2D[n + 1]; 
	Point2D * bRight1;  bRight1 = new Point2D[n + 1];	
	BezierSubdivision(bRight, bRight0, bRight1, n, t2 - t1);

	// draw second point (t2) //
	Point2D secondP = bRight0[n];
	secondP.color = makeVector4f(0.5,1,1,1); secondP.size = 8;
	viewer->addPoint(secondP);

	// draw middle Bezier Polygon //
	for (int i = 0; i < n; i++)
	{
		Point2D p0 = bRight0[i];
		Point2D p1 = bRight0[i + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(0.0f,1.0f,0.0f,0.5f),2);
	}

	// draw right Bezier Polygon //
	for (int i = 0; i < n; i++)
	{
		Point2D p0 = bRight1[i];
		Point2D p1 = bRight1[i + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(0.0f,0.0f,1.0f,0.5f),2);
	}

	// draw middle Bezier curve //
	Point2D * bnMiddle; bnMiddle = new Point2D[nSamplePoint + 2];
	BezierCurvePoints(bRight0, bnMiddle, nSamplePoint, n);

	for (int j = 0; j < nSamplePoint + 1; j++)
	{
		Point2D p0 = bnMiddle[j];
		Point2D p1 = bnMiddle[j + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(0.0f,1.0f,0.0f,1.0f),2);
	}

	// draw right Bezier curve //
	Point2D * bnRight; bnRight = new Point2D[nSamplePoint + 2];
	BezierCurvePoints(bRight1, bnRight, nSamplePoint, n);

	for (int j = 0; j < nSamplePoint + 1; j++)
	{
		Point2D p0 = bnRight[j];
		Point2D p1 = bnRight[j + 1];
		viewer->addLine(p0.position, p1.position, makeVector4f(0.0f,0.0f,1.0f,1.0f),2);
	}

	// delete dynamic arrays //
	delete[] bInput; delete[] bn;
	delete[] bLeft;  delete[] bnLeft;
	delete[] bRight; delete[] bRight0; delete[] bRight1;
	delete[] bnMiddle; delete[] bnRight;

	viewer->refresh();
}
