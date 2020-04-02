#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n1,n2,n3,n4,res;
    printf("enter any five digit number");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    res=num+n4+n3+n2+n1;
    printf("sum is %d",res);
    getch();
}
