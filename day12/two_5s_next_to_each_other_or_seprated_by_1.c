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
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5 && a[i-1]==a[i])
        {
            printf("five is present after a five");
        }
    }
    getch();
}
