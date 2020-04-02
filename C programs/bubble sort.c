#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50],i,j,n,temp;
    printf("enter total number of elemnts to store:");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        printf("sorting array using bubble sort technique\n");
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("all array elements sorted successfully \n");
    printf("array elements in ascending order:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
