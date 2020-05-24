#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,sum=0,i;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5 && a[i+1]==6)
        {
            i++;
        }
        else
        {
            sum+=a[i];
        }
    }
    printf("sum:%d\n",sum);
    getch();
}
