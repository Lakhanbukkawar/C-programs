#include <stdio.h>
#include <conio.h>
void rev(int num,int n1,int n2);
void main()
{
    int num,n1,n2;
    printf("enter three digit number");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    rev(num,n1,n2);
}
void rev(int num,int n1,int n2)
{
    int rev;
    rev=(n1*100)+(n2*10)+(num*1);
    printf("reversed number is%d",rev);
    getch();
}
