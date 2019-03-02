#include<stdio.h>

int main()
  {
    int i,a,temp;
    double  tempa;
    for(i=0; i<10; i++)
      {
        printf("enter number of checked exercises in exercise number %d\n", i+1);
        if(scanf("%lf", &tempa)!=1)
          {
            printf("you didn't enter a number\n");
            return 1;
          }
        if(tempa>8 || tempa<0)
          {
            printf("only values between 0 and 8 allowed\n");
            return 1;
          }
        a = (int) tempa;
        if(a!=tempa)
          {
            printf("you didn't enter an integer\n");
            return 1;
          }
        temp+=a;
      } 
    tempa = (double) temp;
    printf("you got %lfpercent\n", tempa/0.8);
    return 0;
  }

