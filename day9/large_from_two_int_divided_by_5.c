#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("enter the integer value of x and y\n");
    scanf("%d %d",&x,&y);
    if(x==y)
    {
        return 0;
    }
    else if((x%5==y%5 && x<y) || x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
