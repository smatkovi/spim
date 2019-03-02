#include<stdio.h>
#include<math.h>

double a,b,c;
void swap(double *, double *);
void normalchecks(double *, double *, double *);

int main()
  {
    double temp;
    printf("enter edge length a\n");
    scanf("%lf", &temp);
    a = (double) temp;
    if(a==temp)
      {
        printf("enter edge length b\n");
        scanf("%lf", &temp);
        b = (double) temp;
        if(b==temp)
          {
            printf("enter edge length c\n");
            scanf("%lf", &temp);
            c = (double) temp;
              if(c==temp)
                {
		  if(b>a) swap(&b, &a);
		  if(c>a) swap(&c, &a);
		  if(c>b) swap(&b, &c);

		  
		  if(b+c<=a)
                    {
                      if(b+c<a) printf("triangle has impossible dimensions\n");
                      else printf("triangle is one-dimensional degenerate\n");
                    }
		  else
                    {
	              if(pow((int) c,2)+pow((int) b,2)==pow((int)a,2)) printf("triangle is right-angled\n");
                      else normalchecks(&a, &b, &c);
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
      }
    else
      {
        printf("you didn't enter an integer\n");
        return 1;
      }

    return 0;
  }

void swap(double *x, double *y)
  {
    double temp=*x;
    *x=*y;
    *y=temp;
  }

void normalchecks(double *x, double *y, double *z)
  {
    if(a!=b && b!=c && c!=a) printf("triangle is scalene\n"); 
      else
	{	  
          if(a==b || b==c) printf("triangle is isosceles\n");
          else if(a==b && b==c) printf("triangle is equilateral\n");
        }			
  }	    
