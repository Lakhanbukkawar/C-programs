#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("even numbers betweem 1 to 50:\n");
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
