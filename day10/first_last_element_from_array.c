#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n;
    printf("enter the size of array elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("new array after taking first and last integer is:\n");
    printf("%d\t%d\t",a[0],a[n]);
    getch();
}
