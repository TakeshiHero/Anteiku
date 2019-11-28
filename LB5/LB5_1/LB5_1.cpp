 #define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int n=6;
	int i, k;
	float s, p, z, f;
		cout<<"input k:";
	cin>>k;
			z=0; p=1;
				for (k = i; k <= n; k++)
					{
						s = z + (i * i - 1)/(2 * i * i + 5 * i + 1);	
					};
				for (i = 2; i <= k; i++)
					{
						f = p * pow(-1, i) * (i + 1)/i;
					};
							cout<<"sum: "<<s<<endl;
							cout<<"product: "<<f<<endl;
	return 0;
}
