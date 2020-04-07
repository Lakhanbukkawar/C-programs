#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x1,x2,y1,y2,dist;
    printf("enter the value of x1 x2 y1 and y2: ");
    scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
    dist=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("distance between the two points:%f",sqrt(dist));
    printf("\n");
    getch();
}
