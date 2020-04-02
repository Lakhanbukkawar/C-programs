#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5];
    int search,loc=0,f=0,j;
    printf("enter array of element \n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter value to search in array");
    scanf("%d",&search);
    for(j=0;j<=4;j++);
    {
        if(search==a[j])
        {
            loc=j+1;
            f=1;
        }
    }
    if(f==0)
    {
        printf("element is found \n");
    }
    else
    {
        printf("element is not found at %d \n",loc);
    }
    getch();
}
