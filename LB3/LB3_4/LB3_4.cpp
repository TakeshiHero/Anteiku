#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;
	cout<<"input a1,a2(x,y):";
	cin>>a1;
	cin>>a2;
	cout<<"input b1,b2(x,y):";
	cin>>b1;
	cin>>b2;
	cout<<"input c1,c2(x,y):";
	cin>>c1;
	cin>>c2;
	cout<<"input d1,d2(x,y):";
	cin>>d1;
	cin>>d2;
	cout<<"input e1,e2(x,y):";
	cin>>e1;
	cin>>e2;
		if (a1 < 0 && a2 < 0 )
			cout<<"point a1,a2 belongs to the 3 coordinate quarter"<<endl;
				else cout<< "point a1,a2 isn't belongs to the 3 coordinate quarter"<<endl;
		if (b1 < 0 && b2 < 0 )
			cout<<"point b1,b2 belongs to the 3 coordinate quarter"<<endl;
				else cout<< "point b1,b2 isn't belongs to the 3 coordinate quarter"<<endl;
		if (c1 < 0  && c2 < 0 )
			cout<<"point c1,c2 belongs to the 3 coordinate quarter"<<endl;
				else cout<< "point c1,c2 isn't belongs to the 3 coordinate quarter"<<endl;
		if (d1 < 0 && d2 < 0 )
			cout<<"point d1,d2 belongs to the 3 coordinate quarter"<<endl;
				else cout<< "point d1,d2 isn't belongs to the 3 coordinate quarter"<<endl;
		if (e1 < 0 && e2 < 0 )
			cout<<"point e1,e2 belongs to the 3 coordinate quarter"<<endl;
				else cout<< "point e1,e2 isn't belongs to the 3 coordinate quarter"<<endl;
				
				
	
	
	
	return 0;
}
