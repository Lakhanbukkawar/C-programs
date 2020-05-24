#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i,count=0;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i!=0 && a[i-1]==5 && a[i]==5)
        {
            printf("consecutive fives are not allowed");
            break;
        }
        if(a[i]==5)
        {
            count++;
        }
    }
    if(count==5)
    {
        printf("entered a avalid array");
    }
    else
    {
        printf("invalid array");
    }
    getch();
}
