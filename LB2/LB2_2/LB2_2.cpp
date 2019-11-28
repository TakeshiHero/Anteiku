#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float k, t, v1, v2, h, g;
	cout<<"g= ";
	cin>>g;
	cout<<"t= ";
	cin>>t;
	cout<<"k= ";
	cin>>k;
	v1=(k-g*t*t/2)/t;
	v2=g*t+v1;
	h=(v2*v2)/(2*g);
	cout<<"h="<<h<<endl;
	return 0;
}
