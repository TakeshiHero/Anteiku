#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	float z, x, y, x1, x2, dx, y1, y2, dy;
	cout<<"Enter x1: ";
		cin>>x1;
	cout<<"Enter x2: ";
		cin>>x2;
	cout<<"Enter dx: ";
		cin>>dx;
	cout<<"Enter y1: ";
		cin>>y1;
	cout<<"Enter y2: ";
		cin>>y2;
	cout<<"Enter dy: ";
		cin>>dy;
	
	for (x = x1; x <= x2; x += dx) 
		for (y = y1; y <= y2; y += dy)
	{
		z= 2.36 * x + sqrt(pow(M_E, y));
			cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
	}
	return 0;
}
