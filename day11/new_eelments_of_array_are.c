#include <stdio.h>
#include <conio.h>
void main()
{
    int given_arr[1000],new_arr[2],len,i;
    printf("enter the length",len);
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&given_arr[i]);
    }
    int x=len/2;
    new_arr[0]=given_arr[x-1];
    new_arr[1]=given_arr[x];
    for(int i=0;i<2;i++)
    {
        printf("new elements are: \n",new_arr[i]);
    }
    getch();
}
