#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if(abs(a-100)<abs(b-100))
    {
        printf("a is closer to 100\n");
    }
    if(abs(a-100)>abs(b-100))
    {
        printf("b is closer to 100\n");
    }
    if(a==b)
    {
        return 0;
    }
}
