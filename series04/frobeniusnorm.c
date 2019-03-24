#include<stdio.h>
#include<math.h>
int i, j;
int dimm=101, dimn=101;
double frobeniusNorm(int rows, int columns);
double n[100][100];

int main()
  {
    
    double temp;
    printf("enter m between 1 and 100\n");
    scanf("%lf", &temp);
    dimm = (int) temp;
    if(dimm==temp && dimm>=0 && dimm<=100)
      {
        printf("enter n between 1 and 100\n");
        scanf("%lf", &temp);
        dimn = (int) temp;

        if(dimn==temp && dimn>=0 && dimn<=100)
          {
            for(i=0; i<dimm; i++)
              {
                for(j=0; j<dimn; j++)
                  {
                    double temp;
                    printf("enter row %i, column %i of %i rows and %i columns\n", i+1, j+1, dimm, dimn);
                    scanf("%lf", &temp);
                    n[i][j] = temp;
                  }
	     }
          }
        else
          {
            printf("you didn't enter an integer between 1 and 100\n");
            return 1;
          }
      }
    else
      {
        printf("you didn't enter an integer between 1 and 100\n");
        return 1;
      }
    printf("frobeniusnorm of matrix: %f\n", frobeniusNorm(dimm, dimn));
    return 0;
  }

double frobeniusNorm(int rows, int columns)
  {
    double s=0;
    for(i=0; i<rows; i++)
      {
	for(j=0; j<columns; j++)
	  {
	    s+=n[i][j]*n[i][j];
	  }
      }
    s=sqrt(s);
    return s;
  }

