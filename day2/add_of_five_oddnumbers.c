#include <stdio.h>
#include <conio.h>
void main()
{
    int i,num[5],total=0;
    printf("enter the first number\n");
    scanf("%d",&num[0]);
    printf("enter the second number\n");
    scanf("%d",&num[1]);
    printf("enter the third number\n");
    scanf("%d",&num[2]);
    printf("enter the fourth number\n");
    scanf("%d",&num[3]);
    printf("enter the fifth number\n");
    scanf("%d",&num[4]);
    for(i=0;i<=4;i++)
    {
        if((num[i]%2)!=0)
        {
            total=total+num[i];
        }
    }
    printf("sum of all the odd numbers is=%d",total);
    getch();
}
