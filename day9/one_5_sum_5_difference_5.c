#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    if(a==5 || b==5 || a+b==5 || abs(a-b)==5)
    {
        printf("true");
    }
    getch();
}
