#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-3;i++)
    {
        if(a[i]==a[i+1]-1 && a[i]==a[i+2]-2)
        {
            printf("true");
            break;
        }
    }
    getch();
}
