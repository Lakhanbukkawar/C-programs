#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==3 || a[i]==5)
        {
            printf("present in array\n");
        }
        else
        {
            printf("not present\n");
        }
    }
    getch();
}
