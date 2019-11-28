#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float x, y, xp, n, dx;
	cout<<"Enter first value x: ";
		cin>>xp;
	cout<<"Enter the step to change the argument dx: ";
		cin>>dx;
	cout<<"Enter number of step: ";
		cin>>n;
	x=xp;
	for(int i = 1; i <= n; i++)
	{
		y= pow((x + 2), 2)/sqrt(x * x + 1);
			cout<<"x="<<x<<"\ty="<<y<<endl;
		x= x + dx;
		 }     
	return 0;
}
