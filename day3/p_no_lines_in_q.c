#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,i,j,l;
    printf("enter number of lines: ");
    scanf("%d",&a);
    printf("enter numbers in a line: ");
    scanf("%d",&b);
    for(i=1,l=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("%d ",l);
            l++;
        }
        printf("\n");
    }
    getch();
}
