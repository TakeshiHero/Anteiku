#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m, n, i, j, p; 
	float A[7][7];
	cout<<"input m: ";
	cin>>m;
	cout<<"input n: ";
	cin>>n;
	p = 1;
		for ( i = 0; i < m; i++){
			for ( j = 0; j < n; j++){
				cout<<"A["<<i<<"]["<<j<<"]=";
				cin>>A[i][j];
					if ( j >= i + 1 ){
						p *= A[i][j];
			}
			}
			}
				cout<<"product = "<<p<<endl;
	
	return 0;
}
