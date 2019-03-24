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
    int n,k,type;
    double temp;
    printf("enter a natural number n greater or equal to 0\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n==temp && n>=0)
      {
      printf("enter a natural number k greater or equal to 0 and smaller than n\n");
      scanf("%lf", &temp);
      k = (int) temp;
      if(k==temp && k>=0 && n>=k)
        {
          printf("enter a natural number type greater than 0 and smaller than 4\n");
          scanf("%lf", &temp);
          type = (int) temp;
          if(type==temp && type>0 && type<4)
            {
              printf("(n, k) = %i\n", binomial(n, k, type));
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
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }
    return 0;
  }

