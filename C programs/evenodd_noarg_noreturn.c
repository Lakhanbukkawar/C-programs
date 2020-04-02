#include <stdio.h>
#include <conio.h>
void even();
void main()
{
    even();
}
void even()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
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
