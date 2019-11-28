#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int k;
	float dx, xi, xi1, xi_1, sum;
		cout<<"input k: ";
	cin>>k;
		cout<<"input x: ";
	cin>>xi;
		cout<<"input dx: ";
	cin>>dx;
			sum=0;
				for(int i = 6; i <= k; i++) {
				xi += dx;
				xi1 = xi;
				xi_1 = xi;
					if (i >= 6){
						xi_1 -= dx;
						xi1 += dx;
						sum += (2 * xi1 + pow(xi, 2))/xi_1;
						
					}
				}
						cout<<"sum = "<<sum<<endl;
	return 0;
}
