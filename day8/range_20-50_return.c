#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("enter the integer value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=20 && a<=50) || (b>=20 && b<=50) || (c>=20 && b<=50))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
