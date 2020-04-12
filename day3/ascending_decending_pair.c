#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the pair of numbers\n");
    printf("enter the first number: \n");
    scanf("%d",&a);
    printf("enter the second number: \n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("the pair is in decending order");
    }
    else
    {
        printf("the pair is in ascending order");
    }
    getch();

}
