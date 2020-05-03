#include <stdio.h>
#include <conio.h>
void main()
{
    int n1,n2;
    printf("enter the first number: \n");
    scanf("%d",&n1);
    printf("enter the second number: \n");
    scanf("%d",&n2);
    if((n1%n2)==0)
    {
        printf("the number is multiple");
    }
    else
    {
        printf("the number is not multiple");
    }
    getch();
}
