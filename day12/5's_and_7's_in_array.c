#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5 && a[i]==7)
        {
            printf("five and seven in array is present\n");
        }
        else
        {
            printf("not present\n");
        }
    }
    getch();
}
