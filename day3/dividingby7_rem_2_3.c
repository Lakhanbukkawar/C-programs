#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,temp;
    printf("enter the first integer: \n");
    scanf("%d",&x);
    printf("enter the second integer: \n");
    scanf("%d",&y);
    if(x>y)
    {
        temp=y;
        y=x;
        x=temp;
    }
    for(int i=x+1;i<=y;i++)
    {
        if((i%7)==2 || (i%7)==3)
            printf("%d\n",i);
    }
    getch();
}
