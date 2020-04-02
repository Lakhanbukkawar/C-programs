#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3];
    int sum=0,i,j,k;
    printf("enter first 3*3 matrix element: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter second 3*3 matrix element: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("multiplying two matrices \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+mat1[i][j]*mat2[k][j];
            mat3[i][j]=sum;
        }
    }
    printf("multiplication of two matrix are: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",mat3[i][j]);
        printf("\n");
    }
    getch();
}
