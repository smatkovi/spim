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
    printf("the cubicroot is  %lf\n", cubeRoot(r, 1e-10));
    printf("difference to cbrt is %e\n", fabs(cubeRoot(r, 1e-10) - cbrt(r)));
    return 0;
  }

double cubeRoot(double x, double precision)
  {
    double c=1.;
        while(fabs(((2.*c+x/(c*c))/3.)*((2.*c+x/(c*c))/3.)*(2.*c+x/(c*c))/3. - x) > precision)
          {
            c=(2.*c+x/(c*c))/3.;
	    printf("%f\n", c);
          }
        return c;
  }
