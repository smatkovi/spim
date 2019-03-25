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
    printf("current smallest possible precision %e\n", p);
    printf("the cubicroot is  %lf\n", cubeRoot(r, 0.00000001));
    return 0;
  }

double cubeRoot(double x, double precision)
  {
    double c=1.;
    if(x>1) c=x/3.;
    if(x<1) c=1.;
    if(x==1.) return c;
    else
      {
        while(c*c*c-x > precision)
          {
            c-=precision;
          }
        return c;
      }
  }
