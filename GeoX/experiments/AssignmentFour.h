//---------------------------------------------------------------------------
#ifndef AssignmentFourH
#define AssignmentFourH
//---------------------------------------------------------------------------
#include "Experiment.h"
#include "LinearAlgebra.h"
#include "GLGeometryViewer.h"
//---------------------------------------------------------------------------


/// This is an example experiment.
///
/// The code is meant to demonstrate how
///  to use the GeoX framework
///
class AssignmentFour : public Experiment
{
	GEOX_CLASS(AssignmentFour)

//Constructor / Destructor
public:
	AssignmentFour();
	virtual ~AssignmentFour();

//Methods
public:
	void DrawPolygon();
	void DrawCurve();
	void ComputeCurvature();
	//
	virtual QWidget* createViewer();
private:
	void BezierCurvePoints(Point2D * bn, bool givenT);

//Attributes
protected:
	GLGeometryViewer* viewer;
private:
	int32 nSamplePoint;
	float32 tIn;
	vector<Point2D>p;
	vector<Point2D> curvePoints;
	
};

#endif
