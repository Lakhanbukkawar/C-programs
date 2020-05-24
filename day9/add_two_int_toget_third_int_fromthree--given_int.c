#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("enter the integer value of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b+c || b==c+a || c==a+b)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
