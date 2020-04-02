#include <stdio.h>
#include <conio.h>
long addition(long,long);
void main()
{
    long first,second,sum;
    scanf("%ld %ld",&first,&second);
    sum=addition(first,second);
    printf("ld\n",sum);
}
long addition(long a,long b)
{
    long result;
    result=a+b;
    printf("sum=%d",result);
    getch();
}
