#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
    if((x%3)==0 || (x%7)==0)
    {
        printf("the number is multiple");
    }
    else
    {
        printf("it is not the multiple");
    }
    getch();
}
