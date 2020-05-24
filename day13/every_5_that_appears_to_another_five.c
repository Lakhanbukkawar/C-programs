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
        if(a[i]==5)
        {
            if((i>0 && a[i-1]==5) || (i<n-1 && a[i+1]==5))
            {
                count=1;
                printf("true");
            }
            else if(i==n-1)
            {

                printf("false");
                count=0;
            }
        }
    }
    getch();
}
