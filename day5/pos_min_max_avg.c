#include <stdio.h>
#include <conio.h>

void main()
{
    int a,c=0,min,max,b=0;
    double avg;
    printf("enter the positive integer:\n");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("no positive number entered\n");
    }
    min=a;
    max=a;
    while(a>0)
    {
        b=b+a;
        c++;
        max = a > max ? a : max;
        min = a < min ? a : min;
        printf("Input next positive integer:\n");
        scanf("%d", &a);
    }
    avg=b/(double)c;
    printf("Number of positive values entered is %d\n", c);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %0.4lf\n", avg);
    getch();
}
