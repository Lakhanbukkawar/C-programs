#include <stdio.h>
#include <conio.h>
void main()
{
    int marks[100],total=0;
    float f;
    printf("enter the marks: ");
    for(int i=0;i<=marks[100];i++)
    {
        scanf("%d",&marks[i]);
        if(marks[i]<=0)
        {
            break;
        }

        total=total+marks[i];
    }
    f=(float)total/(float)a;
    printf("average marks in mathematics:%.2f\n",f);
    getch();
}
