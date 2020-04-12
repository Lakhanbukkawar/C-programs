#include <stdio.h>
#include <conio.h>
void main()
{
    float cm,inch;
    printf("enter the distance in centimeters: ");
    scanf("%f",&cm);
    inch=cm/2.54;   //2.54 conversion factor
    printf("inch:%.2f",inch);
    getch();
}
