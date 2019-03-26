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
    if(b>a)
      {
        anew=d;
        bnew=c;
      }
    while(b>1)
      {
        a=anew;
        b=bnew;
        if(a%b==0)
          {
             anew=a/b;
             bnew=a;
          }
        else
          {
            anew=a%b;
            bnew=a;
          }
      }
    return c*d/a;
  }
