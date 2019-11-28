#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char** argv) {
    float m, y, x, i;
    cout<< "m=";
    cin>> m;
    y = pow(3*m, M_E);
    x = pow(cos(M_PI/y),2) - 29.45;
    cout<<"\n x="<<x;
    i = pow(2, log10(m))*sqrt(pow(m, 3)+ 2.5*x)/exp(-m);
    cout<<"\n i="<<i;
    return 0;
}	
