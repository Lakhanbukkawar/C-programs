#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2],i,num[0];
    printf("enter array elements: ");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    if(num[0]!=15 && num[0]!=20)
    {
        printf("element not present");
    }
    else
    {
        printf("element present");
    }
    getch();
}
