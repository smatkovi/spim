#include<stdio.h>

void cross(int x);

int main()
  {
    int n;
    double temp;
    printf("enter an integer n between 2 and 9\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n>=2 && n<=9)
      {
        cross(n);
      }
    else
      {
        printf("you didn't enter an integer between 2 and 9\n");
        return 1;
      }
    return 0;
  }

void cross(int x)
  {
    int i, j;
    for(i=1; i<x+1; i++)
      {
        for(j=0; j<x; j++)
          {
            if(j==i) printf("%i", i);
            else printf(" ");
          }
        for(j=0; j<x; j++)
          {
            if(x-i==j) printf("%i", i);
            else printf(" ");
          }
        printf("\n");
      }

    for(i=1; i<x; i++)
      {
        for(j=x; j>0; j--)
          {
            if(j==i) printf("%i", x-i);
            else printf(" ");
          }
        for(j=x; j>0; j--)
          {
            if(x-i==j) printf("%i", x-i);
            else printf(" ");
          }
        printf("\n");
      }
  }
