#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y;
    printf("enter the x coordinate: \n");
    scanf("%d",&x);
    printf("enter the y coordinate: ");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("Quadrant-I(+,+)\n");
    }
    else
        if(x<0 && y>0)
    {
        printf("quadrant-II(-,+)\n");
    }
    else
        if(x<0 && y<0)
    {
        printf("Quadrant-III(-,-)\n");
    }
    else
        if(x>0 && y<0)
    {
        printf("Quadrant-IV(+,-)");
    }
    getch();
}
