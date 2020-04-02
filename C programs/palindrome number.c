#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n1,rev=0;
    printf("enter the n digit number");
    scanf("%d %d",&num,&n1);
    while(num>0)
    {
        n1=num%10;
        rev=rev*10+n1;
        num=num/10;
    }
    if(rev==num)
    {
        printf("the number is parndorm");
    }
    else
    {
        printf("the number is not parandorm");
    }
    getch();
}
