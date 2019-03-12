#include<stdio.h>

double a,b;
void normaltest(double *x, double *y);
int main()
  {
    printf("enter a\n");
    if(scanf("%lf", &a)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter b\n");
    if(scanf("%lf", &b)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }

    if(a==0) printf("on y-axis\n");
    else      
      {
        if(b==0) printf("on x-axis\n");
        else normaltest(&a, &b);
      }
    return 0;
  }

void normaltest(double *x, double *y)
  {
    if(a>0)
      {
        if(b>0) printf("first quadrant\n");
        else printf("fourth quadrant\n");
      }
    else
      {
        if(b>0) printf("second quadrant\n");
        else printf("third quadrant\n");
      }
  }
