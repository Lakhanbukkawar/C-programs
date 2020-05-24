#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],temp;
    printf("enter the elements in array: ");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5/2;j++)
    {
        temp=a[j];
        a[j]=a[5-j-1];
        a[5-j-1]=temp;
    }
    printf("reverse array is");
    for(int j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
    getch();
}
