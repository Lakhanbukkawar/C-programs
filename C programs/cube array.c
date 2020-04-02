#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],cube=1;
    printf("enter 5 values to store in array:\n");
    for(int j=0;j<=4;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=0;i<=4;i++)
    {
        cube=a[i]*a[i]*a[i];
        printf("cube of %d is %d \n",a[i],cube);
        cube=1;
    }
    getch();
}
