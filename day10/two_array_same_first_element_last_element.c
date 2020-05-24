#include <stdio.h>
#include <conio.h>
void main()
{
    int arr1[5],arr2[5],num1[0],num2[0];
    int arr_size1,arr_size2;
    printf("enter the array elements in arr1: ");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the array elements in arr2: ");
    for(int j=0;j<=4;j++)
    {
        scanf("%d",&arr2[j]);
    }
    arr_size1=sizeof(arr1)/sizeof(arr1[5]);
    arr_size2=sizeof(arr2)/sizeof(arr2[5]);
    if(num1[0]==num2[0] || num1[arr_size1-1]==num2[arr_size2-1])
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
