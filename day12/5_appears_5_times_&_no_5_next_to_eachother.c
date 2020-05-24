#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i,flag=0,j=0;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elemnts: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5 && !flag)
        {
            j++;
            flag++;
        }
        else
        {
            flag=0;
        }
    }
    return j==5;
    getch();
}
