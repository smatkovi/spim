#include<stdio.h>
#include<assert.h>

int lcm(int a, int b);

int main()
  {
    double temp;
    int x, y;

    printf("enter first divisor\n");
    scanf("%lf", &temp);
    x=(int) temp;
    assert(temp==x);
    printf("enter second divisor\n");
    scanf("%lf", &temp);
    y=(int) temp;
    assert(temp==y);

    printf("lcm(given nubers)=%i\n", lcm(x, y));

    return 0;
  }

int lcm(int a, int b)
  {
    int c=a, d=b, anew=a, bnew=b;
    while(anew>1)
      {
        if(bnew>anew)
          {
            a=anew;
            b=bnew;
          }
        else
          {
            a=bnew;
            b=anew;
          }
        if(a%b==0)
          {
             anew=a/b;
             bnew=a;
             printf("if\n");
          }
        else
          {
            bnew=a%b;
            anew=a;
             printf("else\n");
          }
        printf("a=%i b=%i\n", anew, bnew);
      }
    return c*d/bnew;
  }
