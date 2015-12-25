
#ifndef FRAME_H
#define FRAME_H
#include "point.h"
#include <vector>
class frame
{
	public:
		frame();
		frame(double,double,double);
        void setfx(double xx);
        void setfy(double yy);
        void setxangle(double agg);
        double getfx();
        double getfy();
        double getxangle();
        
        
		
	private:
  double fx;
  double fy;
  double xangle;
		
};

#endif
