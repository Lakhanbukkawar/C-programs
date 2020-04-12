#include <stdio.h>
#include <conio.h>
void main()
{
    int p,r,t,intamt;
    printf("enter principle,rate of intrest and time: \n");
    scanf("%d %d %d",&p,&r,&t);
    intamt=(p*r*t)/100;
    printf("simple intrest:%d",intamt);
    getch();
}
