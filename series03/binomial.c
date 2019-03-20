#include<stdio.h>
#include<math.h>
int i=0;
  {
    int n,k;
    double temp;
    printf("enter a natural number n greater or equal to 0\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n==temp && n>=0)
      {
      printf("enter a natural number k greater or equal to 0\n");
      scanf("%lf", &temp);
      k = (int) temp;
      if(k==temp && k>=0)
        {
          
        }
      else
        {
          printf("you didn't enter an integer greeater or equal to 0\n");
          return 1;
        }
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }
    return 0;
  }

