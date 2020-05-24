#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter the value of integer a");
    scanf("%d",&a);
    if(a%10<=2 || a%10>=8)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
