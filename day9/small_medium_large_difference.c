#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("enter the value of integer a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c &&b>c)
    {
        return a-b==b-c;
    }
    else if(a>b && a>c && c>b)
    {
        return a-c==c-b;
    }
    else if(b>a && b>c && a>c)
    {
        return b-a==a-c;
    }
    else if(b>a && b>c && c>a)
    {
        return b-c==c-a;
    }
    else if(c>a && c>b && a>b)
    {
        return c-a==a-b;
    }
    else
    {
        return c-b==b-a;
    }
    getch();

}
