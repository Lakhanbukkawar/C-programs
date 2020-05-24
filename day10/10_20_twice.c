#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2],i;
    printf("enter the array element: ");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0]==10 && a[1]==10) || (a[0]==20 && a[1]==20))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
