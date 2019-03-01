#include<stdio.h>

int main()
  {
    double x;
    int n;
    printf("enter amount of prize in euro\n");
    scanf("%lf", &x);
    printf("enter number of friends\n");
    scanf("%d", &n);
    printf("everybody gets %lf euro \n", (double) x/(n+1));
    return 0;
  }

