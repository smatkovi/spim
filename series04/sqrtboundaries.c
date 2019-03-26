#include<stdio.h>
#include<assert.h>
int sqrtBoundaries(double x);

int main()
  {
    double r;
    printf("enter a number\n");
    if(scanf("%lf", &r)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    assert(r>=0);
    printf("the squareroot approximation is  %i\n", sqrtBoundaries(r));
    return 0;
  }

int sqrtBoundaries(double x)
  {
    if(x<4) return 1;
    else
      {
	printf("calculating root of %f\n", x);
	double s=0, stemp=1;
	int w;
	double p=1;
	while(p/2.>0) p/=2.;
	while( (s-stemp)*(s-stemp) > p*1e10)
          {
            s=stemp;
            stemp=(s+x/s)/2.;
	    printf("%f\n", stemp);
          }
	w = s;
	return w;
      }
  }
