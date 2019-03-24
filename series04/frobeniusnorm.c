#include<stdio.h>
#include<math.h>
int i;

int main()
  {
    int dimm, dimn;
    
    double temp;
    printf("enter n greater or equal to 0\n");
    scanf("%lf", &temp);
    dimm = (int) temp;
    double n[dimm, dimn];
    if(dimm==temp && dimm>=0)
      {
        for(i=0; i<dimmm; i++)
          {
            double temp;
            printf("enter %i. number of %i\n", i+1, dimm);
            scanf("%lf", &temp);
            n[i,j] = temp;
          }
      }
    else
      {
        printf("you didn't enter an integer greater or equal to 0\n");
        return 1;
      }
    return 0;
  }

