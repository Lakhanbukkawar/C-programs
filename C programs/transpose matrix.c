#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3],trans[3][3];
    printf("enter 3*3 matrix elements: ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("transposing array \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            trans[i][j]=mat1[j][i];
        }
    }
    printf("transpose of the matrix is : \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }
    getch();
}
