#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    getch();
}
