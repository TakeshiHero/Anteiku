#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float x, y, R;
	cout<<"input x:";
	cin>>x;
	cout<<"input y:";
	cin>>y; 
	R = x*x + y*y;
		if (x*x + y*y <= 4 && x >= 0.6 )
			cout<< "point M belongs to the circle"<<endl;
				else cout<< "point M isn't belongs to the circle"<<endl;
	
	
	return 0;
}
