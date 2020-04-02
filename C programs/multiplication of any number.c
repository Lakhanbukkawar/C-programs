#include <stdio.h>
#include <conio.h>
void main()
{
    int i,num;
    printf("enter number to print table: ");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,(num*i));
    }
    getch();
}
