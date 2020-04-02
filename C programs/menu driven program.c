#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    int num1,num2,res;
    printf("press + for addition");
    printf("press - for substraction");
    printf("press * for mulltiplication");
    printf("press / for division");
    scanf("%c",&ch);
    if(ch=='+')
    {
        printf("enter two number for addition");
        scanf("%d %d",&num1,&num2);
        res=num1+num2;
        printf("res=%d",res);
    }
  else
        if(ch=='-')
        {
        printf("enter two number for substraction");
        scanf("%d %d",&num1,&num2);
        res=num1-num2;
        printf("res=%d",res);
        }
        else
            if(ch=='*')
        {
            printf("enter two number for multiplication");
            scanf("%d %d",&num1,&num2);
            res=num1*num2;
            printf("res=%d",res);
        }
        else
            if(ch=='/')
        {
            printf("enter two number for division");
            scanf("%d %d",&num1,&num2);
            res=num1/num2;
            printf("res=%d",res);
        }
        else
        {
            printf("choice is invalid");
        }
        getch();
}
