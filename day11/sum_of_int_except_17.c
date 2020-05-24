#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,sum=0;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=17)
        {
            sum+=a[i];
        }
    }
    printf("sum of integer except 17:%d\n",sum);
    getch();
}
