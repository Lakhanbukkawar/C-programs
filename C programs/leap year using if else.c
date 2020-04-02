#include <stdio.h>
#include <conio.h>
void main()
{
    int year,rem;
    printf("enter any year");
    scanf("%d",&year);
    rem=year%4;
    if(rem==0)
    {
        printf("entered year is leap year");
    }
    else
    {
        printf("entered year is not leap year");
    }
    getch();
}
