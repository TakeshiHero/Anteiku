#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, N, index1, index2, index3;
	float  sum, Z[N];
	float min1, min2, min3;
	index1 = 0;
	index2 = 0;
	index3 = 0;
	min1 = 100000000;
	min2 = 10000000;
	min3 = 1000000000;
	cout<<"input N: ";
	cin>>N;	
	for (int i = 0; i < N; i++){
		cout<<"Z["<<i<<"]=";
			cin>>Z[i];
				if (min1 > Z[i]){				
					min1 = Z[i];
					index1 = i;
				}
				else if (min2 > Z[i]){
					min2 = Z[i];
					index2 = i;
				}
				else if (min3 > Z[i]){
					min3 = Z[i];
					index3 = i;
				}
				sum = min1 + min2 + min3;
	}
		cout<<"min1:"<<min1<<endl;
		cout<<"min2:"<<min2<<endl;
		cout<<"min3:"<<min3<<endl;
		cout<<"min1 payroll number: "<<index1<<endl;
		cout<<"min2 payroll number: "<<index2<<endl;
		cout<<"min3 payroll number: "<<index3<<endl;
		cout<<"sum = "<<sum<<endl;
		
	return 0;
}
