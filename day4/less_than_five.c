#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],i,max=5;
    printf("enter the five array element: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<max)
        {
            printf("less than five element: %d",a[i]);
        }
    }
    getch();
}
