#include"segement.h"
#include"frame.h"
#include"point.h"
#include<iostream>
#include"solver.h"
using namespace std;
int main(){
	segement sg1,sg2;
	sg1.segementset(10,30,180);
	sg2.segementset(15,25,240); 
	point despoint;
	despoint.set(25,5); 
	solver solver1;
	solver solver2;
	solver1.solverangleset(45,45);//���� 
	solver1.normalsolve(sg1,sg2);
	solver2.solverdestpointset(15,5);//���� 
	solver2.inversolve(sg1,sg2);
	cout<<"�������"<<endl;
	getchar();
	 return 0; 
	
}

