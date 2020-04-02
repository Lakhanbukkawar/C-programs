#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[9];
    int i,size=10,even,odd;
    printf("enter the size of array; ");
    scanf("%d",&size);
    printf("enter %d elements in array: ",size);
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    even=0;
    odd=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total even elements: %d\n",even);
    printf("total odd elements: %d\n",odd);
    getch();
}
