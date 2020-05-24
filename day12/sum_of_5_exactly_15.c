#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5)
        {
            sum+=5;
        }
    }
    return sum==15;
    getch();
}
