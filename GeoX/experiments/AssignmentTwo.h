
#ifndef AssignmentTwoH                     
#define AssignmentTwoH                     
#include "Experiment.h"                       
#include "LinearAlgebra.h" 
#include "GLGeometryViewer.h"

class AssignmentTwo : public Experiment    // <--- derive your experiment from base class <Experiment>
{                                              //
    GEOX_CLASS(AssignmentTwo)              // <--- use the macro to create registration code
                                               //
//Constructor / Destructor                     //
public:                                        //
    AssignmentTwo();                       // <--- the constructor is used to intialize the parameters
    virtual ~AssignmentTwo();              // <--- the destructor is used to destroy resources; often empty for our experiments
                                               //
//Methods                                      //
public:
	vector<Point2D> points;
	vector<Point2D> curvePoints;
    void computeBezierCurve();
	Point2D deCastaljau(int i, int j, float t);
	float computeNChooseI(int n, int i);
	float computeBernsteinBasis(int n, int j, float t);
	void computeCurvature();
	virtual QWidget* createViewer();

//Attributes
protected:
    GLGeometryViewer* viewer;
                                              
//Attributes                                  
private:                                       
    int32 controlPoints;
	int32 samplePoints;
	int32 selected;											
    float32 tValue;
};                                             
                                              
#endif                                        
