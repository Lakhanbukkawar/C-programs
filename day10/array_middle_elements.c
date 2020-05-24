#include <stdio.h>
#include <conio.h>
void main()
{
     int a[5],b[5],i,j;
    printf("enter the elements of first array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements of second array\n");
    for(j=0;j<=4;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("the array containing elements of the above two array are\n");
    printf("%d\t%d\t",a[2],b[2]);
    getch();
}
