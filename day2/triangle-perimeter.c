#include <stdio.h>
#include <conio.h>
void main()
{
    float x,y,z,p;
    printf("enter the size of three sides");
    scanf("%f %f %f",&x,&y,&z);
    if(x<(y+z) && y<(x+z) && z<(y+x))
    {
        p=x+y+z;
        printf("\nperimeter=%.1f\n",p);
    }
    else
    {
        printf("not possible");
    }
    getch();
}
