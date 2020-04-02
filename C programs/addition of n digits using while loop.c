#include <stdio.h>
#include <conio.h>
void main()
{
    int num,add=0,n1;
    printf("enter n digit number");
    scanf("%d %d",&num,&n1);
    while(num>0)
    {
        n1=num%10;
        add=add+n1;
        num=num/10;
    }
    printf("%d",add);
    getch();
}
