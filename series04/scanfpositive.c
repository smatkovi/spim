#include<stdio.h>
#include<stdlib.h>

double scanfPositive()
  {
    double t=0;
    char *temp;
    while(t<=0)
      {
        printf("add a real number greater than 0\n");
        scanf("%s", temp);
        t=atof(temp);
      }
    return t;
  }

int main()
  {
    scanfPositive();
    return 0;
  }
