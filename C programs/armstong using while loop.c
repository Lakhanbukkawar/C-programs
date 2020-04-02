#include <stdio.h>
#include <conio.h>
void main()
{
    int num,add=0,n1;
    printf("enter n digit number");
    scanf("%d %d",&num,&n1);
    add=num;
    while(num>0)
    {
        n1=num%10;
        num=num/10;
        add=(n1*n1*n1)+add;
    }
    if(add==num)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }
    getch();
}
