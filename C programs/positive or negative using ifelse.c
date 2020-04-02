#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("enter the number from keyboard");
    scanf("%d",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    getch();
}
