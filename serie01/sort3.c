#include<stdio.h>

int main()
  {
    double a,b;
    printf("enter length a of rectangle\n");
    if(scanf("%lf", &a)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter width b of rectangle\n");
    if(scanf("%lf", &b)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("The area of the rectangle is %lf units\n", a*b);
    return 0;
  }

