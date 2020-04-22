#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b: \n");
    scanf("%d %d",&a,&b);
    printf("before swaping the values of a and b: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swaping the values of a and b: %d %d",a,b);
    getch();
}
