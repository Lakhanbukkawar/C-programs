#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i,three=0,five=0;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    printf("enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==3)
        {
            three++;
        }
        if(a[i]==5)
        {
            five++;
        }
    }
    printf("\ncount of 3s in this array:%d",three);
    printf("\ncount of 5s in this array:%d",five);
    if(three>five)
    {
        printf("\nnumber of 3s are greater");
    }
    else
    {
        printf("\nnumber of 5s are greater in this array");
    }
    getch();
}
