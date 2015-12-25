#ifndef SOLVER_H
#define SOLVER_H
#include "point.h"
#include "segement.h"
#include "frame.h"

class solver
{
	public:
		solver();
		void solveranglesituationset(double,double);
		void solverdestpointsituationset(double ,double );
		void normalsolve(segement,segement);
		void inversolve(segement,segement);
		double get_solutionpointx(); 
		double get_solutionpointy(); 
		double get_solutionangle1();
		double get_solutionangle2();
	private:
	    point destpoint;
	    double joint1angle;
     	double joint2angle;

};

#endif
