#include<stdio.h>
#include<math.h>
int i=0;
double mypow(double x, int a)
  {
    if(a%2 == 0) return 1;
    else return -1;
  }
double partialSumI(int n)
  {
    
    if(n>0) return 4*mypow(-1, n)/(2*n + 1) + partialSumI(n-1);
    else return 4;
  }

double partialSumII(int n)
  {
    double s=4.;
    for(i=0; i<n; i++)
      {
        s += 4.*mypow(-1, i+1) / (2.*(i+1) + 1);
      }
    return s;
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
        if(n<9999)
          {
            printf("with recursion: %lf\n", partialSumI(n)); 
            printf("with loop: %lf\n", partialSumII(n)); 
          }
        else printf("probably too high number for recursion so only with loop: %.60lf\n", partialSumII(n)); 
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }

    return 0;
  }

