#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("enter the non-negative integer value");
    scanf("%d",&n);
    if(n%13==0 || n%13==1)
    {
        printf("true");
    }
    else
    {
        printf("invalid");
    }
    getch();
}
