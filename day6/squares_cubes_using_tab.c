#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("numbers\tsquares\tcube\n");
    for(i=0;i<=20;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    getch();
}
