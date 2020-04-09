#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("enter an integer: ");
    scanf("%d",&a);
    printf("square of each one value from 1 to a %d :\n",a);
    for(b=0;b<=a;b++)
    {
        if((b%2)==0)
        {
            printf("%d^2=%d\n",b,b*b);
        }
    }
    getch();
}
