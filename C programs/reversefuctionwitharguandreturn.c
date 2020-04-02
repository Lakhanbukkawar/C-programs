#include <stdio.h>
#include <conio.h>
int rev(int num,int n1,int n2);
void main()
{
    int num,n1,n2;
    printf("enter a three digit number");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    rev(num,n1,n2);
}
int rev(int num,int n1,int n2)
{
    int rev;
    rev=(n1*100)+(n2*10)+(num*1);
    printf("reversed number is%d",rev);
    return rev;
    getch();
}
