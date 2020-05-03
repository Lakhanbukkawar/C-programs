#include <stdio.h>
#include <conio.h>
void main()
{
    int t1,t2;
    printf("enter the temperature t1 and t2");
    scanf("%d %d",&t1,&t2);
    if((t1<0 && t2>100 )|| (t2<0 && t1>100))
    {
        printf("the temperature is in given condition");
    }
    else
    {
        printf("not satisfied");
    }
    getch();
}
