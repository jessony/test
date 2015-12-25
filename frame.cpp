#include "frame.h"

frame::frame()
{
	
}
frame::frame(double xx,double yy,double agg){
	fx=xx;
	fy=yy;
	xangle=agg;
	
	
}
        void frame::setfx(double xx){
        	fx=xx;
        	
		}
        void frame::setfy(double yy){
        	fy=yy;
		}
        void frame::setxangle(double agg){
        	xangle=agg;
		}
        double frame::frame::getfx(){
        	return fx;
		}
        double frame::getfy(){
        	return fy;
		}
       double frame:: getxangle(){
        	return xangle;
		}
/*frame::frame(vector vv){
	fx=vv[0];
	fy=vv[1];
	fz=vv[2];
}   */
