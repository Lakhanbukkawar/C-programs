#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,a;
    printf("enter two integer values");
    scanf("%d %d",&x,&y);
    if(x==y)
    {
       a=(x+y)*3;
        printf("the triple sum is:%d",a);
    }
    else
    {
        printf("the number is not same");
    }
    getch();
}
