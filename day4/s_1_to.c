#include <stdio.h>
#include <conio.h>
void main()
{
    float S=0;
    int i;
    for(i=1;i<=50;i++)
    {
        S=S+(float)1/i;
    }
    printf("value of S: %.2f\n",S);
    getch();
}
