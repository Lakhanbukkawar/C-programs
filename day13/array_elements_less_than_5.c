#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],b[100],i,n;
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5)
        {
            for(int j=i;j>=0;j--)
            {
                b[j]=a[j];
            }
            break;
        }
    }
    for(int d=0;d<=i;d++)
    {
        printf("%d",b[d]);
    }
    getch();
}
