#include<stdio.h>
#include<math.h>

int main()
  {
    int a,b,c;
    printf("enter a natural number a\n");
    scanf("%d", &a);
    printf("enter a natural number b\n");
    scanf("%d", &b);
    printf("enter a natural number c\n");
    scanf("%d", &c);
    if(pow(a,2)+pow(b,2)==pow(c,2))
      printf("you entered a pythagorean triple \n");
    else
      printf("you didn't enter a pythagorean triple\n");
    return 0;
  }

