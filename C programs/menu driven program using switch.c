#include <stdio.h>
#include <conio.h>
void main()
{
    int ch,num1,num2,res;
    printf("press 1 for addition");
    printf("press 2 for substraction");
    printf("press 3 for multiplication");
    printf("press 4 for division");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter two number for addition");
        scanf("%d %d",&num1,&num2);
        res=num1+num2;
        printf("res=%d",res);
        break;
    case 2:
        printf("enter two number for substraction");
        scanf("%d %d",&num1,&num2);
        res=num1-num2;
        printf("res=%d",res);
        break;
    case 3:
        printf("enter two number for multiplication");
        scanf("%d %d",&num1,&num2);
        res=num1*num2;
        printf("res=%d",res);
        break;
    case 4:
        printf("enter two number for division");
        scanf("%d %d",&num1,&num2);
        res=num1/num2;
        printf("res=%d",res);
        break;
    default:
        printf("invalid choice");
    }
    getch();
}
