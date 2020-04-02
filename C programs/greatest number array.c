#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10];
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
    printf("greatest element = %d",arr[0]);
    getch();
}
