#include<stdio.h>
#include<math.h>
int i=0;

int f(int x)
  {
    int s=1;
    for(i=0; i<x; i++) s*=i+1;
    return s;
  }

int binomial(int n, int k, int type)
  {
    if(type == 1)
      {
        return f(n)/(f(k)*f(n-k));
      }
    else
      if(type == 2)
        {
          int s=1;
          for(i=0; i<k; i++) s*=n-i;
          s/=f(k);
          return s;
        }
      else
        {
          if(k == 0 || n == k) return 1;
          else return binomial(n-1, k, type) + binomial(n-1, k-1, type);
        }
  }
int main()
  {
    int n,j;
    double temp;
    printf("enter a natural number n greater or equal to 0\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n==temp && n>=0)
      {
        for(i=0; i<n; i++)
          {
            for(j=0; j<=i; j++) printf("%i ", binomial(i, j, 3));
            printf("\n");
          }
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }
    return 0;
  }

