#include<stdio.h>
#include<math.h>


int main()
  {
    double r;
    printf("enter radius of circle\n");
    scanf("%lf", &r);
    printf("the circumference is  %lf units \n", 2.0*r*4.0*atan(1.0));
    printf("the area is  %lf units \n", pow(r,2)*4.0*atan(1.0));
    return 0;
  }

