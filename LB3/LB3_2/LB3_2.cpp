#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float l, k, a, b, c;
	 cout<<"input k - ";
		cin>>k;
	 cout<<"input l - ";
		cin>>l;
			cout<< endl;
			a= (l + k)/4;
				cout<<"a="<<a<<endl;
			b= l - k/l;
				cout<<"b="<<b<<endl;
			c= 2 * l * k + 1;
				cout<<"c="<<c<<endl;
				if (a>b && a>c)
					cout<<"a= "<<a<<endl;
				else if (b>a && b>c)
					cout<<"b= "<<b<<endl;
				else if (c>a && c>b)
					cout<<"c= "<<c<<endl;	
				if (a>b && a<c)
					cout<<"a= "<<a<<endl;
				else if (b>a && b<c)
					cout<<"b= "<<b<<endl;
				else if (c>a && c<b)
					cout<<"c= "<<c<<endl;
				if (a<b && a<c)
					cout<<"a= "<<a<<endl;
				else if (b<a && b<c)
					cout<<"b= "<<b<<endl;
				else if (c<a && c<b)
					cout<<"c= "<<c<<endl;
		
	return 0;
}
