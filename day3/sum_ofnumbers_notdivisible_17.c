#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,temp,sum=0;
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
    for(int i=x;i<=y;i++)
    {
        if((i%17)!=0)
        {
            sum=sum+i;
        }
    }
    printf("sum=%d",sum);
    getch();
}
