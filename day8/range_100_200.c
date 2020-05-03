#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y;
    printf("enter the value in integer of x and y");
    scanf("%d %d",&x,&y);
    if((x>=100 && x<=200) || (y>=100 && y<=200))
    {
        printf("value is in range");
    }
    else
    {
        printf("invalid range");
    }
    getch();
}
