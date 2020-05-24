#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter the non-negative integer value");
    scanf("%d",&a);
    if((a%3==0) ^ (a%7==0))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
