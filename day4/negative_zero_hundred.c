#include <stdio.h>
#include <conio.h>
void main()
{
    int a[7],i,j;
    printf("enter the 7 numbers in array:\n");
    for(i=0;i<=6;i++)
    {
        scanf("%d",&j);
        if(j>0)
        {
            a[i]=j;
        }
        else
        {
            a[i]=100;
        }
    }
    printf("values are: \n");
    for(i=0;i<=6;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
