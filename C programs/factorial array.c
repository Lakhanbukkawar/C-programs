#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],fact=1;
    int i,j,k;
    printf("enter 5 values to store in array: \n");
    for(j=0;j<=4;j++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(int k=a[i];k>=1;k--)
        {
            fact=fact*k;
        }
        printf("factorial of %d is %d\n",a[i],fact);
        fact=1;
    }
}
