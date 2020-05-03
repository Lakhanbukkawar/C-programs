#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a;
    printf("enter a value to check if it is within 10 to 100 or 200\n");
    scanf("%d",&a);
    if((abs(1000-a)<=100) || (abs(2000-a)<=100))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
