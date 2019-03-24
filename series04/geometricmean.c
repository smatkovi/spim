#include<stdio.h>
#include<math.h>
int i;
double geometricMean(double x[], int dim);

int main()
  {
    int m;
    
    double temp;
    printf("enter n greater or equal to 0\n");
    scanf("%lf", &temp);
    m = (int) temp;
    double n[m];
    if(m==temp && m>=0)
      {
        for(i=0; i<m; i++)
          {
            double temp;
            printf("enter %i. number of %i\n", i+1, m);
            scanf("%lf", &temp);
            n[i] = temp;
          }
      }
    else
      {
        printf("you didn't enter an integer greeater or equal to 0\n");
        return 1;
      }
    printf("%f\n", geometricMean(n, m));
    return 0;
  }

double geometricMean(double x[], int dim)
  {
    double p=1;
    for(i=0; i<dim; i++)
      {
        p*=x[i];
        printf("product=%f\n", p);
      }
    p=pow(p, 1./dim);
    return p;
  }
