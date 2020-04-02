#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[4];
    int i,N;
    printf("enter array");
    scanf("%d",&N);
    printf("enter %d elements in the array : ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nelements in array are: ");
    for(i=0;i<=N;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
