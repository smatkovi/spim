#include<stdio.h>
#include<math.h>

int main()
  {
    int n,k;
    double temp;
    printf("enter n\n");
    scanf("%lf", &temp);
    n = (int) temp;
    if(n==temp)
      {
        printf("enter k\n");
        scanf("%lf", &temp);
        k = (int) temp;
        if(k==temp)
          {

          }
        else
          {
            printf("you didn't enter an integer\n");
	    return 1;
          }
      }
    else
      {
        printf("you didn't enter an integer\n");
        return 1;
      }

    return 0;
  }

