#include<stdio.h>
#include<math.h>

int main()
  {
    double a,b,c;
    printf("enter a from a*x^2 term\n");
    scanf("%lf", &a);
        printf("enter  b from b*x^1 term\n");
        scanf("%lf", &b);
            printf("enter c from c*x^0 term\n");
            scanf("%lf", &c);

                    printf("function crosses y axis at (0, %lf) \n", c);
                    if(pow(b, 2)>=4.*a*c) printf("function crosses x axis at (%lf, 0) and  (%lf, 0) \n", (-b+sqrt(pow(b, 2)-4.*a*c))/(2.*a), (-b-sqrt(pow(b, 2)-4.*a*c))/(2.*a));
     
    if(a==0 && b==0) printf("function is linear\n");
    else if(b==0) printf("function is parabola\n");
    else printf("function is a general squared function\n");

    printf("extremum at (%lf, %lf)\n", -b/(2.*a), c + -b*b/(4.*a));
    if(2.*a>0) printf("extremum is minimum\n");
    else if(2.*a<0) printf("extremum is maximum\n");
    return 0;
  }

