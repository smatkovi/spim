#include<stdio.h>

int main()
  {
    double x,temp;
    int n;
    printf("enter amount of prize in euro\n");
    if(scanf("%lf", &x)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter number of friends\n");
    if(scanf("%lf", &temp)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    n = (int) temp;
    if(n==temp)
      printf("everybody gets %lf euros \n", (double) x/(n+1));
    else
      printf("you didn't enter an integer for the number of your friends\n");
    return 0;
  }

