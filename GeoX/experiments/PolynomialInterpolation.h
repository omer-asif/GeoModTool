//---------------------------------------------------------------------------
#ifndef PolynomialInterpolationH
#define PolynomialInterpolationH
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
class PolynomialInterpolation : public Experiment
{
	GEOX_CLASS(PolynomialInterpolation)

//Constructor / Destructor
public:
	PolynomialInterpolation();
	virtual ~PolynomialInterpolation();

//Methods
public:
	void drawPoints();
	void drawTangentAndNormal();
	void interpolatePoints();
	void approximatePolynomial();
	//
	virtual QWidget* createViewer();
private:
	void drawLines(DynamicVector<float> lambda);

//Attributes
protected:
	GLGeometryViewer* viewer;
public:
	int noOfPoints;
	float a;
	int selectedPoint;
	int selectedDegree;
	vector<Point2D>p;
	vector<int> pHandle;
};

#endif
