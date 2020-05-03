#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y;
    printf("enter the value of x and y");
    scanf("%d %d",&x,&y);
    if(x==30 || y==30 || x+y==30)
    {
        printf("the number is thirty or sum is thirty");
    }
    else
    {
        printf("the sum is greater");
    }
    getch();
}
