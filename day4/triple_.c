#include <stdio.h>
#include <conio.h>
void main()
{
    int a[7],i,j;
    printf("enter the number in array:\n");
    scanf("%d",&j);
    for(i=0;i<=6;i++)
    printf("values are: \n");
    for(i=0;i<=6;i++)
    {
        a[i]=j;
        j=3*j;
    }
    for(i=0;i<=6;i++)
    {
        printf("%d\n",a[i]);
    }

    getch();

}
