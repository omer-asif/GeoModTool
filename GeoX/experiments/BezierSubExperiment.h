//---------------------------------------------------------------------------
#ifndef BezierSubExperimentH
#define BezierSubExperimentH
//---------------------------------------------------------------------------
#include "Experiment.h"
#include "LinearAlgebra.h"
#include "GLGeometryViewer.h"
//---------------------------------------------------------------------------
//#include "GeoXGLWidget.h"

/// This is an example experiment.
///
/// The code is meant to demonstrate how
///  to use the GeoX framework
///
class BezierSubExperiment : public Experiment
{
    GEOX_CLASS(BezierSubExperiment)

//Constructor / Destructor
public:
    BezierSubExperiment();
    virtual ~BezierSubExperiment();

//Methods
public:
	void DrawCurve();
    virtual QWidget* createViewer();

//Attributes
public:
    vector< Vector2f > Data;

protected:
    GLGeometryViewer* viewer;
private:
	int32 nSamplePoint;
	float32 t1;
	float32 t2;
};


#endif
