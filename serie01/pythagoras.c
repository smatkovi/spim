#include<stdio.h>
#include<math.h>

int main()
  {
    int a,b,c;
    double temp;
    printf("enter a natural number a\n");
    scanf("%lf", &temp);
    a = (int) temp;
    if(a==temp)
      {
        printf("enter a natural number b\n");
        scanf("%lf", &temp);
        b = (int) temp;
        if(b==temp)
          {
            printf("enter a natural number c\n");
            scanf("%lf", &temp);
            c = (int) temp;
              if(c==temp)
                {
                  if(pow(a,2)+pow(b,2)==pow(c,2))
                    printf("you entered a pythagorean triple \n");
                  else
                    printf("you didn't enter a pythagorean triple\n");
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
      }
    else
      {
        printf("you didn't enter an integer\n");
        return 1;
      }

    return 0;
  }

