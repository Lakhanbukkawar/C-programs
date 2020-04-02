#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5];
    printf("enter the value to save in array\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse order of array is: ");
    for(int j=4;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    getch();
}
