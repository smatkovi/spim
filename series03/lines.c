#include<stdio.h>
double s[2];
int lines(double u[3], double v[3], double s[2])
  {
   if(v[1]*u[0] - u[1]*v[0] != 0)
     {
       s[1]=(v[2]-v[0]*u[2]/u[0])/(v[1]-v[0]*u[1]/u[0]);
       s[0]=u[2]/u[0] - u[1]/u[0]*s[1];
       return -1;
     }
   else
     if(u[0]==0)
       {
         if(u[2]/u[1] == v[2]/v[1]) return 0;
         else return 1;
       }
     else
       if(u[1]==0)
         {
           if(u[2]/u[0] == v[2]/v[0]) return 0;
           else return 1;
         }
       else
         {
           if(u[2]/u[1] == v[2]/v[1]) return 0;
           else return 1;
         }
  }
int main()
  {
    double u[3],v[3];
    printf("enter a\n");
    if(scanf("%lf", &u[0])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter b\n");
    if(scanf("%lf", &u[1])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter c\n");
    if(scanf("%lf", &u[2])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }

    printf("enter d\n");
    if(scanf("%lf", &v[0])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter e\n");
    if(scanf("%lf", &v[1])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
    printf("enter f\n");
    if(scanf("%lf", &v[2])!=1)
      {
        printf("you didn't enter a number\n");
        return 1;
      }
   
    printf("%i possible coordinates (%f, %f)\n", lines(u, v, s), s[0], s[1]); 
    return 0;
  }

