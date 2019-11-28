#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include<ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j;
	float A[3][7];
	srand(time(0));				
		for ( i = 0; i < 3; i++)
		{
			for ( j = 0; j < 7; j++)
			{
				A[i][j]=rand() % 10;
				cout<<A[i][j]<<"  |  "<<"\t";
			}
			cout<<endl<<"----------------------------------------------------"<<endl;
		}	
		cout<<"\n";
		for ( i = 0; i < 3; i++){
			if ( i == 1)
			{
				i = i + 1;
			}
			for ( j = 0; j < 7; j++){
				cout<< A[i][j]<<"\t";
		}
				cout<<endl;
	}
	return 0;
}

