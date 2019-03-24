#include<stdio.h>
#include<math.h>
int i, j;
int dim;
int maxCompare(double x[], double y[], int dim);

int main()
  {
    
    double temp;
    printf("enter dimension m, an integer greater than 0\n");
    scanf("%lf", &temp);
    dim = (int) temp;
    if(dim==temp && dim>=0)
      {
            double n[dim];
            for(i=0; i<dim; i++)
              {
                double temp;
                printf("enter %i. number of %i for vector 1\n", i+1, dim);
                scanf("%lf", &temp);
                n[i] = temp;
	      }
            
            double l[dim];
            for(j=0; j<dim; j++)
              {
                double temp;
                printf("enter %i. number of %i for vector 2\n", j+1, dim);
                scanf("%lf", &temp);
                l[j] = temp;
              }
            printf("maximum occures %i times at same position of both vectors\n", maxCompare(n, l, dim));
      }
    else
      {
        printf("you didn't enter  an integer greater than 0\n");
        return 1;
      }
    return 0;
  }


int maxCompare(double x[], double y[], int dim)
  {
    int c=0;
    double g=x[0];
    for(i=0; i<dim; i++)
      {
        if(x[i]>g) g=x[i];
        if(y[i]>g) g=y[i];
      }  
    for(i=0; i<dim; i++)
      {
        if(x[i]==g && y[i]==g) c++;
      }
    return c;
  }
