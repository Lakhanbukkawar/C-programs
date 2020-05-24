#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]==3 && a[i+1]==3) || (a[i]==5 && a[i+1]==5))
        {
            printf("true",a[i],a[i+1]);
        }
        else
        {
            printf("false",a[i]);
        }
    }
    getch();
}
