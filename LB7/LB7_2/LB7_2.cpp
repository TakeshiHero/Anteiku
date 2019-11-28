#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 int i, k, v, n;
 float A[4], B[4], C[8];
 for(i = 0; i < 4; i++)
 {
 cout << "A[" << i << "]=";
 cin >> A[i];
 }
 for(k = 0; k < 4; k++)
 {
 cout << "B[" << k << "]=";
 cin >> B[k];
 }	
 for (v = 0; v < 8; v++)
 {	
		if ( v < 4){
			C[v] = A[v] + B[v];		
		}
		else{
			C[v] =0;
		}
			cout<<"C["<<v<<"]="<<C[v]<<endl;	
 }
 
	return (0);	
}
