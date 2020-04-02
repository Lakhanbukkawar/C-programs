#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,search,first,last,middle,arr[50];
    printf("enter total number of elements: ");
    scanf("%d",&n);
    printf("enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a number to find : ");
    scanf("%d",search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        {
            first=middle+1;
        }
        else
            if(arr[middle]==search)
        {
            printf("%d found at location %d \n",search,middle+1);
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        printf("not found !%d is not present in the list",search);
    }
    getch();
}
