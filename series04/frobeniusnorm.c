#include<stdio.h>
#include<math.h>
int i, j;
int dimm, dimn;
double frobeniusNorm(double a[], int rows, int columns);

int main()
  {
    
    double temp;
    printf("enter m , an integer greater than 0\n");
    scanf("%lf", &temp);
    dimm = (int) temp;
    if(dimm==temp && dimm>=0 && dimm<=100)
      {
        printf("enter n , an integer greater than 0\n");
        scanf("%lf", &temp);
        dimn = (int) temp;

        if(dimn==temp && dimn>=0 && dimn<=100)
          {
            double n[dimm*dimn];
            for(i=1; i<=dimm; i++)
              {
                for(j=1; j<=dimn; j++)
                  {
                    double temp;
                    printf("enter row %i, column %i of %i rows and %i columns\n", i+1, j+1, dimm, dimn);
                    scanf("%lf", &temp);
                    n[i*j] = temp;
                  }
	      }
            printf("frobeniusnorm of matrix: %f\n", frobeniusNorm(n, dimm, dimn));
          }
        else
          {
            printf("you didn't enter  an integer greater than 0\n");
            return 1;
          }
      }
    else
      {
        printf("you didn't enter  an integer greater than 0\n");
        return 1;
      }
    return 0;
  }

double frobeniusNorm(double a[], int rows, int columns)
  {
    double s=0;
    for(i=1; i<=rows; i++)
      {
	for(j=1; j<=columns; j++)
	  {
	    s+= a[i*j] * a[i*j];
	  }
      }
    s=sqrt(s);
    return s;
  }

