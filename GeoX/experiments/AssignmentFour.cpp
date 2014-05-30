//---------------------------------------------------------------------------
#include "stdafx.h"
//---------------------------------------------------------------------------
#include "AssignmentFour.h"
//---------------------------------------------------------------------------
#include "Properties.h"
#include "GLGeometryViewer.h"
#include "GeoXOutput.h"
#include "DynamicLinearAlgebra.h"
//---------------------------------------------------------------------------

IMPLEMENT_GEOX_CLASS(AssignmentFour, 0)
{
	BEGIN_CLASS_INIT(AssignmentFour);
	ADD_SEPARATOR("Number of Sample Point");
	ADD_INT32_PROP(nSamplePoint, 0);
	ADD_SEPARATOR("Parameter t");
	ADD_FLOAT32_PROP(tIn, 0);
	
	ADD_NOARGS_METHOD(AssignmentFour::DrawCurve);
	ADD_NOARGS_METHOD(AssignmentFour::ComputeCurvature);


}

QWidget* AssignmentFour::createViewer()
{
	viewer = new GLGeometryViewer();
	return viewer;
}

AssignmentFour::AssignmentFour()
{
	viewer = NULL;
	nSamplePoint = 10;
	tIn = 0.5f;

}

AssignmentFour::~AssignmentFour() {}

void AssignmentFour::DrawPolygon()
{
	p.clear();
	int n = viewer->getNumberOfPoints();

	if (n > 1)
	{
		for (int i = 0; i < n; i++)
		{
			p.push_back(viewer->getPoint(i));

			//pHandle=viewer->getPoint
		}
		for (unsigned int i = 0; i < p.size() - 1; i++)
		{

			viewer->addLine(p[i].position, p[i + 1].position);
		}

	}
	else
		output << "Place at least two points!" << "\n";
	viewer->refresh();
}
void AssignmentFour::BezierCurvePoints(Point2D * bn, bool givenT)
{
	float t = 0.0f;
	//Point2D * b; b = new Point2D[n + 1];
	int n = p.size();
	Point2D * b; b = new Point2D[n + 1];
	float tempSize;
	tempSize = givenT ? 3 : nSamplePoint;
	for (int j = 1; j < tempSize - 1; j++)
	{
		for (int i = 0; i < n + 1; i++)
			b[i] = p[i];

		t = givenT ? tIn : ((float)j) / (tempSize - 1);
		for (int r = 1; r < n; r++)
		{
			for (int i = 0; i < n - r; i++)
			{
				b[i].position.data()[0] = (1 - t) * b[i].position.data()[0] + t * b[i + 1].position.data()[0];
				b[i].position.data()[1] = (1 - t) * b[i].position.data()[1] + t * b[i + 1].position.data()[1];

			}
			if (t == tIn)
			{
				// at the end of the the above for loop we have b array which corresponds to new r
				for (int k = 0; k < n - r - 1; k++)
				{
					Point2D p0 = b[k];
					Point2D p1 = b[k + 1];
					viewer->addLine(p0.position, p1.position);
				}
			}


		}
		bn[j] = b[0];
	}
}


void AssignmentFour::DrawCurve()
{
	DrawPolygon();
	if (p.empty())
	{
		output << "Please place atleast 2 points!" << "\n";
		return;
	}

	if (p.size() > 2){
		// draw Bezier curve //
		Point2D * bn;
		bn = new Point2D[nSamplePoint];
		BezierCurvePoints(bn, false);
		bn[0] = p[0];
		bn[nSamplePoint - 1] = p[p.size() - 1];
		int j = 0;

		for (j = 0; j < nSamplePoint - 1; j++)
		{
			curvePoints.push_back(bn[j]);
			viewer->addLine(bn[j].position, bn[j + 1].position);
		}
		curvePoints.push_back(bn[j]);
		//BezierCurvePoints(bn, true);


	}

	viewer->refresh();
}

void AssignmentFour::ComputeCurvature()
{
	// compute curvature k //
	float dx, dy, dxx, dyy;
	float * k;
	k = new float[nSamplePoint];

	for (int j = 1; j < nSamplePoint; j++)
	{
		dx = (curvePoints[j + 1].position.data()[0] - curvePoints[j - 1].position.data()[0]) / 2;
		dy = (curvePoints[j + 1].position.data()[1] - curvePoints[j - 1].position.data()[1]) / 2;
		dxx = (curvePoints[j + 1].position.data()[0] - 2 * curvePoints[j].position.data()[0] + curvePoints[j - 1].position.data()[0]);
		dyy = (curvePoints[j + 1].position.data()[1] - 2 * curvePoints[j].position.data()[1] + curvePoints[j - 1].position.data()[1]);
		k[j] = (dx * dyy - dy * dxx) / powf(dx * dx + dy * dy, 1.5);
	}
	k[0] = k[1];
	k[nSamplePoint-1] = k[nSamplePoint - 2];

	float min = k[0];
	float max = k[0];
	for (int j = 0; j < nSamplePoint ; j++)
	{
		if (min > k[j])
			min = k[j];
		if (max < k[j])
			max = k[j];
	}
	
	for (int j = 0; j < nSamplePoint-1 ; j++)
	{
		Point2D p0 = curvePoints[j];
		Point2D p1 = curvePoints[j + 1];

		if (k[j] > 0)
		{
			viewer->addLine(p0.position, p1.position, makeVector4f(1.0f, 1.0f - k[j] / max, 1.0f - k[j] / max, 1.0f), 2);
		}
		else
		{
			viewer->addLine(p0.position, p1.position, makeVector4f(1.0f - k[j] / min, 1.0f - k[j] / min, 1.0f, 1.0f), 2);
		}

	}
	viewer->refresh();
}

