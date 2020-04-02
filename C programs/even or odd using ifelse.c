#include <stdio.h>
#include <conio.h>
void main()
{
    int num,rem;
    printf("enter the number from keyboard");
    scanf("%d",&num);
    rem=num%2;
    if(rem==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    getch();
}
