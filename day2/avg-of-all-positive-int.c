#include <stdio.h>
#include <conio.h>
void main()
{
    int j,p=0;
    float num[5],total=0,avg;
    printf("enter the first number: \n");
    scanf("%f",&num[0]);
    printf("enter the second number: \n");
    scanf("%f",&num[1]);
    printf("enter the third number: \n");
    scanf("%f",&num[2]);
    printf("enter the fourth number: \n");
    scanf("%f",&num[3]);
    printf("enter the fifth number: \n");
    scanf("%f",&num[4]);
    for(j=0;j<=4;j++)
    {
        if(num[j]>0)
        {
            p++;
            total=total+num[j];
        }
    }
    avg=total/p;
    printf("number of positive numbers: %d",p);
    printf("\naverage value: %.2f",avg);
    printf("\n");
    getch();
}
