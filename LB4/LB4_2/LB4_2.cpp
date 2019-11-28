#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float v, f, v1, v2, v3, dv;
	cout<<"Enter v1: ";
		cin>>v1;
	cout<<"Enter v2: ";
		cin>>v2;
	cout<<"Enter v3: ";
		cin>>v3;
	cout<<"Enter dv: ";
		cin>>dv;
	v=v1;
	while(v <= v3)
	{
		if (v < v2)
			f= v*v - pow(v, 1/3);
		else 
			f = 1/atan(v + log(v));
				cout<<"v="<<v<<"\tf="<<f<<endl;
		v= v + dv;		
	}
	return 0;
}
