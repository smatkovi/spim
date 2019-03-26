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
    int c=a, d=b, temp;
    if(b>a)
      {
        a=d;
        b=c;
      }
    while(a>1)
      {
        while(a%b==0) a/=b;
        temp=a;
        a=b;
        b=temp;
      }
    return c*d/a;
  }
