#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],sm=0;
    printf("enter the value of 5 array element:\n");
    for(int j=0;j<5;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=0;i>=0;i--)
    {
        if(sm<=a[i])
        {
            sm=a[i];
        }
    }
    printf("the smallest element is %d\n",sm);
    getch();
}
