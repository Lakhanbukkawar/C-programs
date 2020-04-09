#include <stdio.h>
#include <conio.h>
void main()
{
    float num[5];
    int j,p=0,n=0;
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
        }
        else
            if(num[j]<0)
        {
            n++;
        }
    }
    printf("number of positive values: %d\n",p);
    printf("number of negative value: %d\n",n);
    getch();

}
