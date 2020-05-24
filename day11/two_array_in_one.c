#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3],b[3],c[6];
    printf("enter two array for construction\n");
    printf("enter first array");
    for(int i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter second array\n");
    for(int i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<=5;i++)
    {
        if(i<=2)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-3];
        }
    }
    printf("value of third array is: ");
    for(int i=0;i<=5;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");
    getch();
}
