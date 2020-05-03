#include <stdio.h>
#include <conio.h>
void main()
{
    int n,x=51;
    printf("enter the number");
    scanf("%d",&n);
    if(n>x)
    {
        int a=(n-x)*3;
        printf("the absolute triple difference is:%d",a);
    }
    else
    {
        int b=x-n;
        printf("the absolute difference is:%d",b);
    }
    getch();
}
