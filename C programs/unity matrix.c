#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3];
    printf("enter the matrix element");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        printf("1");
    }
    getch();
}
