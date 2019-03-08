#include<stdio.h>
#include<math.h>


int main()
  {
    double a;
    printf("enter angle in degrees\n");
    if(scanf("%lf", &a)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }

    while(a-360.>0)a-=360.;
    a/=180.;
    printf("the is  %lfPi in radiants \n", a);
    return 0;
  }

