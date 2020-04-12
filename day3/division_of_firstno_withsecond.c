#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    float result;
    printf("enter two numbers for division: \n");
    printf("value of a: \n");
    scanf("%d",&a);
    printf("value of b: ");
    scanf("%d",&b);
    if(b!=0)
    {
        result=(float)a/(float)b;
        printf("division=%.1f",result);
    }
    else
    {
        printf("division not possible");
    }
    getch();
}
