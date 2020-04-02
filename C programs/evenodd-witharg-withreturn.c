#include <stdio.h>
#include <conio.h>
int even(int num);
void main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    even(num);

}
int even(int num)
{
    int even;
    if(num%2==0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    return even;
    getch();

}
