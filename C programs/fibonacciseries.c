#include <stdio.h>
#include <conio.h>
void main()
{
    int a=0,b=1,c,n;
    printf("enter a positive number: ");
    scanf("%d",&n);
    printf("fibonacci series:%d,%d, ",a,b);
    c=a+b;
    while(c<=n)
    {
        printf("%d, ",c);
    a=b;
    b=c;
    c=a+b;
    }
    getch();
}
