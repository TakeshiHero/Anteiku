#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
 	float C[8];
 	float max;
	max = fabs(C[0]);
 		for (int i = 0; i < 8; i++){
 			cout << "C[" << i << "]=";
 				cin >> C[i];
 					if (fabs(C[i]) > max)
 						max = fabs(C[i]);
 		}
 			cout<<"max module element  = "<<max<<endl;
	return 0;
}
