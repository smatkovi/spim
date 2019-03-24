#include<stdio.h>
#include<math.h>
int i=0;
double p(double x, int n)
  {
    double s=1;
    for(i=0; i<n; i++) s*=x;
    return s;
  }
int fibonacci(int n)
  {
    if(n<10) return ceil((p(1 + sqrt(5), n) - p(1 -sqrt(5), n))/(sqrt(5)*p(2, n)));
    else return floor((p(1 + sqrt(5), n) - p(1 -sqrt(5), n))/(sqrt(5)*p(2, n)));
  } 
int main()
  {
    int n;
    double temp;
    printf("enter a natural number n greater or equal to 0\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n==temp && n>=0)
      {
        printf("n^th fibonaccinumber: %i\n", fibonacci(n));
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }

    return 0;
  }

