#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if((a%10)==(b%10));
   {
      printf("the last digit is same");
   }
    else
   {
       printf("invalid");
   }

    getch();
}
