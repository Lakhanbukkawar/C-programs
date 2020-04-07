#include <stdio.h>
#include <conio.h>
void main()
{
    double w1,w2,c1,c2,result;
    printf("enter the weight of product1 and product2");
    scanf("%lf %lf",&w1,&w2);
    printf("enter the number of product1 and product2");
    scanf("%lf %lf",&c1,&c2);
    result=((w1*c1)+(w2*c2))/(c1+c2);
    printf("average value=%lf\n",result);
    getch();
}
