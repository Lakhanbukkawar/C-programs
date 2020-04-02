#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[2][2],mat2[2][2],i,j,mat3[2][2];
    printf("enter 2*2 matrix 1 elements :");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter 2*2 matrix 2 elements :");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("add the two matrix");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("the new matrix : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
            printf("%d",mat3[i][j]);
        printf("\n");
    }
    getch();
}
