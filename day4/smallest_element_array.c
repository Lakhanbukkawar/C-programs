#include <stdio.h>
#include <conio.h>
void main()
{
    int a[6],b,i,minimum,l=0;
   // printf("enter the six array elemnts: \n");
   // scanf("%d",&b);
    printf("Enter integers\n",b);
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    minimum=a[0];
    for(i=1;i<6;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
            l=i+1;
        }
    }
    printf("location of element is %d and value is %d\n",l,minimum);
    getch();
}
