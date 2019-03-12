#include<stdio.h>

double a,b;
void normaltest(double x, double y);
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

    if(a==0) printf("on y-axis\n")
    else normaltest(a, b);
    if(b==0) printf("on x-axis\n")
    else normaltest(a, b);

    return 0;
  }

normaltest(x, y)
  {
  }
