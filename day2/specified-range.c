#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("enter the integer");
    scanf("%d",&x);
    if(x>=0 && x<=80)
    {
        printf("the value is in range");
    }
    else
    {
        printf("the value is outside range");
    }
    getch();
}
