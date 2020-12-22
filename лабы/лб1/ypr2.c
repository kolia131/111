#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

double s,a,b,c,d,x,y,z;

x = 0.0374;
y = -0.825;
z = 16;

a = 1+pow(sin(x+y), 2);
b = fabs(x-2*y/(1+(pow(x,2)*pow(y,2))));
c = pow(x, fabs(y));
d = pow(cos(atan(1/z)), 2);

s = ((a/b)*c)+d;

printf("%f",s);
return 0;
}