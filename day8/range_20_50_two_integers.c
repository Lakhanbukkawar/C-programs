#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the integer value of a and b\n");
    scanf("%d %d",&a,&b);
    if((a>=20 && a<=50) || (b>=20 && b<=50))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
