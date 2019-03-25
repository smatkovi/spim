#include<stdio.h>
#include<math.h>
double cubeRoot(double x, double precision);

int main()
  {
    double r;
    printf("enter a number\n");
    if(scanf("%lf", &r)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    double p=1./2.;
    while(p/2.>0) p/=2.;
    printf("the cubicroot is  %lf\n", cubeRoot(r, p));
    return 0;
  }

double cubeRoot(double x, double precision)
  {
    double c=x/3.;
    while(c*c*c-x > precision)
      {
        if((c/4.)*(c/4.)*(c/4.)-x < (3.*c/4.)*(3.*c/4.)*(3.*c/4.)) c/=3.;
        else c/=(4./3);
      }
    return c;
  }
