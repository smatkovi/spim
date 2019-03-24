#include<stdio.h>
#include<math.h>
int i=0;
int check(int x[10], int y[3])
  {
    int r=-1;
    for(i=0; i<8; i++)
      {
        if(x[0]==y[i] && x[0+1]==y[i+1] && x[0+2]==y[i+2]) r=1;
      }
    return r;
  }
int main()
  {
    int n[10], m[3];
    while(i<10)
      {
        double temp;
        printf("enter %i. natural number of 10, greater or equal to 0\n", i+1);
        scanf("%lf", &temp);
        n[i] = (int) temp;
        if(n[i]==temp && n[i]>=0)
          {
            i++;   
          }
        else
          {
            printf("you didn't enter an integer greeater or equal to 0\n");
            i=10;
            return 1;
          }
      }
    i=0;
    while(i<3)
      {
        double temp;
        printf("enter %i. natural number of 3 greater or equal to 0\n", i+1);
        scanf("%lf", &temp);
        m[i] = (int) temp;
        if(m[i]==temp && m[i]>=0)
          {
            i++;   
          }
        else
          {
            printf("you didn't enter an integer greeater or equal to 0\n");
            i=3;
            return 1;
          }
      }
    printf("%i\n", check(n, m));
    return 0;
  }

