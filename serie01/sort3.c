#include<stdio.h>

double a,b,c;
void swap(double *, double *);
int main()
  {


    printf("enter number a\n");
    if(scanf("%lf", &a)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter number b\n");
    if(scanf("%lf", &b)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter number c\n");
    if(scanf("%lf", &c)!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }


    if(b>a)
      {
        swap(&b, &a);
        printf("a and b swapped\n");
      }
    if(c>a)
      {
        swap(&c, &a);
        printf("a and c swapped\n");
      }
    if(c>b)
      {
        swap(&b, &c);
        printf("c and b swapped\n");
      }
    printf("%lf, %lf, %lf\n", a, b, c);
    return 0;
  }

void swap(double *x, double *y)
  {
    double temp=*x;
    *x=*y;
    *y=temp;
  }
