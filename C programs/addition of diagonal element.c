#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3];
    int row,col,sum=0;
    printf("enter the elements in matrix");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<3;row++)
    {
        sum=sum+a[row][row];
    }
    printf("\n sum of diagonal element=%d",sum);
    getch();
}
