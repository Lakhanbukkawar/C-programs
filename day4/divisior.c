#include <stdio.h>
#include <conio.h>
void main()
{
    int x,i;
    printf("enter the integer: ");
    scanf("%d",&x);
    printf("the divisor of %d are: ",x);
    for(i=1;i<=x;i++)
    {
        if((x%i)==0)
        {
            printf("\n%d",i);
            printf("\n");
        }
    }
    getch();
}
