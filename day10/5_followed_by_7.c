#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3]={1,5,7};
    int i;
    printf("enter array elements: ",a[3]);
    for(i=0;i<3;i++)
    {
    if(a[i]==5 && a[i+1]==7)
    {
        a[i+1]=1;
    }
    }
    printf("elements in new array are: ",a[i+1]);
    getch();
}
