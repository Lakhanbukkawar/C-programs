#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the first no and second no");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    if((b%a)==0)
    {
        printf("multiplied");
    }
    else
    {
        printf("not multiplied");
    }
    getch();
}
