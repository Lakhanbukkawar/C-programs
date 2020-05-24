#include <stdio.h>
#include <conio.h>
void main()
{
    int num1[3],num2[3],sum=0,i,j;
    printf("enter array elements in first array: \n");
    for( i=0;i<=2;i++)
    {
        scanf("%d",&num1[i]);
    }
    printf("enter array elements in second array: \n");
    for( j=0;j<=2;j++)
    {
        scanf("%d",&num2[j]);
    }
    if((num1[0]+num1[1]+num1[2])>=(num2[0]+num2[1]+num2[2]))
    {
        for( i=0;i<=2;i++)
        {
            sum+=num1[i];
        }
        printf("the largest sum:%d",sum);
    }
    else
    {
        for( j=0;j<=2;j++)
        {
            sum+=num2[j];
        }
        printf("the largest sum:%d",sum);
    }
   // printf("the array which has the largest sum %d",sum);
    getch();
}
