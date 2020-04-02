#include <stdio.h>
#include <conio.h>
void main()
{
    int num1,num2,sw;
    printf("enter two number from keyboard");
    scanf("%d %d",&num1,&num2);
    sw=num2;
    num2=num1;
    num1=sw;
    printf("enter swaping number");
    printf("num1=%d,num2=%d",num1,num2);
    getch();
}
