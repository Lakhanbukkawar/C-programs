#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    if((a>=40 && a<=50 && b>=40 && b<=50) || (a>=50 && a<=60 && b>=50 && b<=60))
    {
        printf("the values are in range");
    }
    else
    {
        printf("invalid");
    }
    getch();
}
