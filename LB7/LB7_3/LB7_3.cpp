#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, n;
	double A[9], max, min, d;
	max = fabs(A[0]);
	min = 100000000;
	cout<<"input n(<=8): ";
	cin>>n;
	for (int i = 0; i < n; i++){
		cout<<"A["<<i<<"]=";
			cin>>A[i];
	}
	for (int i = 0; i < n; i++){
			if (max < fabs(A[i])){
			max = fabs(A[i]);
	}
			if (min > fabs(A[i])){
			min = fabs(A[i]);
	}
			d = max - min;
	}
					cout<<"difference between max and min element = "<<d<<endl;
					cout<<"max module element  = "<<max<<endl;
					cout<<"min module element  = "<<min<<endl;
	
	
	return 0;
}
