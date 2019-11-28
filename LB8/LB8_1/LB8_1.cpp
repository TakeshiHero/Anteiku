#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, n, m;
	float A[2][3], C[2][3], max;
	max = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
			if (fabs(A[i][j]) > max) {
				max = fabs(A[i][j]);
			}
		}
	}
			cout<<"max: "<<max<<endl;
		for ( i = 0; i < 2; i++){
				for ( j = 0; j < 3; j++){
				C[i][j] = A[i][j] / max;
			}
		}
		for ( n = 0; n < 2; n++){
			for ( m = 0; m < 3; m++){
				cout<<"C["<<n<<"]["<<m<<"]="<<C[n][m]<<endl;
			}
			}
	system("pause");
	return 0;
}
