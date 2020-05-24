#include <stdio.h>
#include <conio.h>
void main()
{
    int arr_size;
    int arr1[5];
    int nums[0];
    printf("enter the array elements: ");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    arr_size=sizeof(arr1)/sizeof(arr1[5]);
    if(arr_size>0 && nums[0]==nums[arr_size-1])
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();

}
