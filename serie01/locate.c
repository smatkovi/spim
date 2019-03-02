#include<stdio.h>

int main()
  {
    double x,y,L;
    printf("enter length L of square\n");
    if(scanf("%lf", &L)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter x position\n");
    if(scanf("%lf", &x)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter y position\n");
    if(scanf("%lf", &y)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    if((x==L && y<=L) || (x==0 && y<=L) || (y==L && x<=L) || (y==0 && x<=L))
      printf("the point is on the square\n");
    if(x<L && x>0 && y<L && y>0)
      printf("the point is in the square\n");
    if(x>L || y>L)
      printf("the point is outside the square\n");
    return 0;
  }

