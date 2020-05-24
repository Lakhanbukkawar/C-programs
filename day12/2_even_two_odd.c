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
        if(i!=0)
        {
        if((a[i]%2==0 && a[i-1]%2==0) || (a[i]%2!=0 && a[i-1]%2!=0))
        {
            printf("true");
            break;
        }
        }
    }
    getch();
}
