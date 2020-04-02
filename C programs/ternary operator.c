#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    c=(a>b)?a:b;
    printf("%d",c);
    getch();
}
