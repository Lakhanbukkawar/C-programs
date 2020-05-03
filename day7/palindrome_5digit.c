#include <stdio.h>
#include <conio.h>
void main()
{
    int n1,n2,n3,n4,num,orgnum,rev=0;
    printf("enter a five digit number\n");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    rev=(n1*1000)+(n2*1000)+(n3*100)+(n4*10)+(num*1);
    if(rev==orgnum)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    getch();
}
