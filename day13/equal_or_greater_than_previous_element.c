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
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            printf("true");
            break;
        }
    }
    getch();
}
