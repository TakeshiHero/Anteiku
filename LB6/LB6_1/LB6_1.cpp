# include <iostream>
# include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 float x, y, y1, eps;
 int n;
 cout<<"input x: ";
 cin>>x;
 cout<<"input eps: ";
 cin>>eps;
 cout<<"input n: ";
 cin>>n;
 y1=x;
 do {
 y=y1;
 y1=(1.0/n)*(x/pow(y, n-1)+(n-1)*y);
 } while (fabs(y1-y)>eps);
 cout<<"The root value to the level: " <<y1; 
	return 0;
}
