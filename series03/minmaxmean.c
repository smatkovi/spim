#include<stdio.h>
#include<math.h>
int i=0;
void minmaxmean(int x[], int dim)
  {
    int s=x[0], g=x[0];
    double m=x[0];
    for(i=1; i<dim; i++)
      {
        if(x[i]<s) s=x[i];
        if(x[i]>g) g=x[i];
        m+=x[i];
      }
    printf("min %i, max %i, mean %f\n", s, g, (double) m/dim);
  }
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
    int n[10], m;
    
    double temp;
    printf("enter n greater or equal to 0\n");
    scanf("%lf", &temp);
    m = (int) temp;
    if(m==temp && m>=0)
      {
        while(i<m)
          {
            double temp;
            printf("enter %i. natural number of %i, greater or equal to 0\n", i+1, m);
            scanf("%lf", &temp);
            n[i] = (int) temp;
            if(n[i]==temp && n[i]>=0)
              {
                i++;   
              }
            else
              {
                printf("you didn't enter an integer greeater or equal to 0\n");
                i=m;
                return 1;
              }
          }
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }
    minmaxmean(n, m);
    return 0;
  }

