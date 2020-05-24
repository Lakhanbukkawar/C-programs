#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,mid,n;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        mid=n/2;
        printf("middle elements are:%d %d",a[mid-1],a[mid]);
    }
    else
    {
        printf("enter the even number for array size");
    }
    getch();
}
