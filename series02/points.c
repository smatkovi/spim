#include<stdio.h>

int main()
  {
    double x,y,u,v,a,b;
    printf("enter x\n");
    if(scanf("%lf", &x)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter y\n");
    if(scanf("%lf", &y)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter u\n");
    if(scanf("%lf", &u)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter v\n");
    if(scanf("%lf", &v)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
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
    printf("The area of the rectangle is %lf units\n", a*b);
    printf("The area of the rectangle is %lf units\n", a*b);
    printf("The area of the rectangle is %lf units\n", a*b);
    printf("The area of the rectangle is %lf units\n", a*b);
    printf("The area of the rectangle is %lf units\n", a*b);
    printf("The area of the rectangle is %lf units\n", a*b);
    return 0;
  }

