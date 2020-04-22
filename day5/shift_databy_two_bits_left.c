#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("read the integer from keyboard: ");
    scanf("%d",&a);
    printf("\ninteger value=%d",a);
    a<<=3;
    b=a;
    printf("the left shifted data is:%d ",b);
    getch();
}
