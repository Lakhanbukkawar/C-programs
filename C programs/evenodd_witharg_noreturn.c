#include <stdio.h>
#include <conio.h>
void even(int num);
void main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    even(num);
}
void even(int num)
{
    if(num%2==0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    getch();
}
