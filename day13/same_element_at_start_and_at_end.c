#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=a[i-n+1])
        {
            printf("true");
        }
    }
    getch();
}
