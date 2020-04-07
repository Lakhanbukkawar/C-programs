#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    float y,avg;
    printf("enter total distance in kilometres: ");
    scanf("%d",&x);
    printf("enter total number of fuel spent in litres: ");
    scanf("%f",&y);
    avg=x/y;
    printf("average consumption of fuel=%f",avg);
    printf("\n");
    getch();

}
