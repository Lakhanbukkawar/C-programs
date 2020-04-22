/*#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c=0;
    printf("enter a positive number less than 500: \n");
    scanf("%d",&a);
    a=b;
    if(b<1 || b>999)
    {
        printf("given number is out of range");
    }
    else
    {
        c=(c+b)%10;
        b=b/10;
        c=(c+b)%10;
        b=b/10;
        c=(c+b)%10;
        printf("sum of digits of %d is %d\n",a,c);
    }
    getch();
}*/
#include <stdio.h>
#include <conio.h>
  void main()
  {
    int a, x = 0, y;
    printf("Input a positive number less than 500: \n");
    scanf("%d", & a);
    y = a;
    if (y < 1 || y > 501)
    {
      printf("The given number is out of range\n");
    }
    else
    {
      x += y % 10;
      y /= 10;
      x += y % 10;
      y /= 10;
      x += y % 10;
      printf("Sum of the digits of %d is %d\n", a, x);
    }
    getch();
  }
