#include <stdio.h>
#include <conio.h>
void main()
{
    int j,num[5],total=0;
     printf("enter the first number: \n");
    scanf("%d",&num[0]);
    printf("enter the second number: \n");
    scanf("%d",&num[1]);
    printf("enter the third number: \n");
    scanf("%d",&num[2]);
    printf("enter the fourth number: \n");
    scanf("%d",&num[3]);
    printf("enter the fifth number: \n");
    scanf("%d",&num[4]);
    for(j=0;j<=4;j++)
    {
        if((num[j]%2)!=0)
        {
            total=total+num[j];
        }
    }
    printf("\nSum of all odd values: %d", total);
    getch();
}
