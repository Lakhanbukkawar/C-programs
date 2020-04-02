#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5];
    int sum=0,i;
    printf("enter %d elements in array: ",5);
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("sum %d\n",sum);
    getch();
}
