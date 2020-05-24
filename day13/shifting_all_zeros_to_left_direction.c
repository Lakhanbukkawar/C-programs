#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100],n,i,count=0;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = arr[count];
            arr[count] = 0;
            count++;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    getch();
}
