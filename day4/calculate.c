#include <stdio.h>
#include <conio.h>
void main()
{
    float sum=0,j=1,i,x;
    for(i=1;i<=7;i+=2)
    {
        x=i/j;
        j=j*2;
        sum=sum+x;
    }
    printf("sum is=%.2f",sum);
    getch();
}
