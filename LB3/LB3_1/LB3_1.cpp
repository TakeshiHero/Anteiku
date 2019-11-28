#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float 	x, y;
	cout<<"input x: ";
	cin>>x;
		if (x > 1 && x <= M_E)
			y= exp(-M_PI) + pow(x,- M_E);
				else if (x > M_E && x < pow(10,3))
			y= pow( log (x - M_E), 2);
				else if (x >= 0 && x <= 1)
			y= pow(x, 2)/ M_E;
				else if (x < 0)
			y= pow(2, x) * 1/pow(tan (x * x), 3);
				else if (x >= pow(10, 3))
			y= 0;
	cout<<"y= "<<y;		
	
	
	return 0;
}
