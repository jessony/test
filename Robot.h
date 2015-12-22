#ifndef ROBOT_H
#define ROBOT_H
#include"segement.h" 

class Robot
{
	public:
		Robot();
		~Robot();
		//Robot(double,double,);
		void robotactact(double,double);
	private:
        segement segement1;
        segement segement2;
         
};


#endif
