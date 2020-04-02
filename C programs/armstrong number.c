#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n1,n2,orgnum,res;
    printf("enter any three digit number");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    res=(n1*n1*n1)+(n2*n2*n2)+(num*num*num);
    if(res==orgnum)
    {
        printf("entered number is armstrong");
    }
    else
    {
        printf("entered number is not armstrong");
    }
    getch();
}
