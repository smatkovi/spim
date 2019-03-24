#include<stdio.h>
#include<math.h>
int i, j;

int main()
  {
    int dimm, dimn;
    
    double temp;
    printf("enter m greater or equal to 0\n");
    scanf("%lf", &temp);
    dimm = (int) temp;
    if(dimm==temp && dimm>=0)
      {
        printf("enter n greater or equal to 0\n");
        scanf("%lf", &temp);
        dimn = (int) temp;

        if(dimm==temp && dimm>=0)
          {
            double n[dimm][dimn];
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
            printf("you didn't enter an integer greater or equal to 0\n");
            return 1;
          }
      }
    else
      {
        printf("you didn't enter an integer greater or equal to 0\n");
        return 1;
      }
    return 0;
  }

