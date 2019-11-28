#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float n, m, A;
		cout<<"input n:";
	cin>>n;
		cout<<"input m:";
	cin>>m;
		A = 1;
		for(int i = n;i >= m-1;i--){
			A*=i;
		}
		cout<<"A="<<A<<endl;
	return 0;
}
