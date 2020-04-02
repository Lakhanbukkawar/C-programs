#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n1,n2,orgnum,rev;
    printf("enter three digit number");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    rev=(n1*100+n2*10+num*1);
    if(rev==orgnum)
    {
        printf("the number is parandorm");
    }
    else
    {
        printf("tyhe number is not parandorm");
    }
    getch();
}
