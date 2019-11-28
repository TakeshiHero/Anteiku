#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float x, f, a, eps;
	int i; 
	cout<<"input x: ";
	cin>>x;
	cout<<"input eps: ";
	cin>>eps;
	f = 1;
	a = 1;
	i = 0;
		do {
			i= i + 2;
			a*= x/i;
			f+= a;
		}while (fabs(a)>eps);
		cout<<"f = "<<f<<endl;
	return 0;
}
