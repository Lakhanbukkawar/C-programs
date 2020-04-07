#include <stdio.h>
#include <conio.h>
void main()
{
    int n1,n2,n3;
    printf("enter three integers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("n1 is the largest number");
    }
    else
        if(n2>n3 && n2>n1)
    {
        printf("n2 is the largest number");
    }
    else
    {
        printf("n3 is the largest number");
    }
    getch();
}
