#include <stdio.h>
#include <conio.h>
void main()
{
    int r,h;
    float pi=3.142,vol;
    printf("enter the value of r and h");
    scanf("%d %d",&r,&h);
    vol=pi*r*r*h;
    printf("%f",vol);
    getch();
}
