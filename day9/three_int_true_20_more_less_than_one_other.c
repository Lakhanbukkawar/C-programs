#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(abs(a-b)>=20 || abs(a-c)>=20 || abs(b-c)>=20)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
