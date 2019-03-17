#include<stdio.h>

double scalarProduct(double x[3], double y[3])
  {
    return x[0]*y[0] + x[1]*y[1] + x[2]*y[2];
  }

void vectorProduct(double x[3], double y[3])
  {
    printf("first component of vectorproduct is %f\n", x[1]*y[2] - x[2]*y[1]);
    printf("wecond component of vectorproduct is %f\n", x[2]*y[0] - x[0]*y[2]);
    printf("third component of vectorproduct is %f\n", x[0]*y[1] - x[1]*y[0]);
  }

int main()
  {
    double u[3],v[3];
    printf("enter component 1 of vector u\n");
    if(scanf("%lf", &u[0])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter component 2 of vector u\n");
    if(scanf("%lf", &u[1])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter component 3 of vector u\n");
    if(scanf("%lf", &u[2])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }

    printf("enter component 1 of vector v\n");
    if(scanf("%lf", &v[0])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter component 2 of vector v\n");
    if(scanf("%lf", &v[1])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter component 3 of vector v\n");
    if(scanf("%lf", &v[2])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    
    printf("scalarproduct of u_i*v_j=%f\n", scalarProduct(u, v));
    vectorProduct(u, v);

    return 0;
  }

