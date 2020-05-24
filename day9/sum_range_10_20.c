#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    c=a+b;
     return c >= 10 && c <= 20 ? 30 : c;
    getch();
}
