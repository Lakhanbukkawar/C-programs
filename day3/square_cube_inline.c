#include <stdio.h>
#include <conio.h>
void main()
{
    int a,i;
    printf("enter number of lines: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    getch();
}
