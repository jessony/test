#include"segement.h"
#include"frame.h"
#include"point.h"
#include<iostream>
#include"solver.h"
using namespace std;
int main(){
	vector<double>v1(3,0);
	vector<double>v2(3);
	v2[0]=2;
	v2[1]=4;
	v2[2]=60;
	frame f1(v2[0],v2[1],v2[2]);
	
	segement sg1,sg2;
	sg1.segementset(10,30,180);
	sg2.segementset(15,25,240); 
	point despoint;
	despoint.set(25,5); 
	solver solver1;
	solver solver2;
	solver1.solveranglesituationset(45,45);//正解 
	solver1.normalsolve(sg1,sg2);
	solver2.solverdestpointsituationset(15,5);//反解 
	solver2.inversolve(sg1,sg2);
	cout<<"程序结束"<<endl;
	getchar();
	 return 0; 
	 
	
}

