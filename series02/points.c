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

    a-=u;
    b-=v;
    if(x*b==y*a) printf("points are on one line\n");
    else printf("points are not on one line\n");
    return 0;
  }

