#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n;
    printf("enter the size of array elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=5)
        {
                    printf("%d\t",a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==5)
        {
            a[i]=0;
             printf("%d\t",a[i]);
        }
    }
getch();
}
