#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if(a>=20 && a<=30 && b>=20 && b<=30)
    {
        if(a>=b)
        {
            return a;
        }
        if(b>=a)
        {
            return b;
        }
    }
    else if(a>=20 && a<=30)
    {
        return a;
    }
    else if (b>=20 && b<=30)
    {
        return b;
    }
    else
    {
        return 0;
    }
}
