#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],i;
    printf("enter the array elements");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]==a[i+1] && a[i+2]==a[i])
        {
            printf("the triplet is present");
        }
    }
    getch();
}
