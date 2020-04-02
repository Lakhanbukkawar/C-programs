#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,*a,*b,temp;
    printf("enter the value of x and y\n");
    scanf("%d %d",&x,&y);
    printf("before swapping\nx=%d\ny=%d\n",x,y);
    a=&x;
    b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("after swaping\nx=%d\ny=%d\n",x,y);
    getch();
}
