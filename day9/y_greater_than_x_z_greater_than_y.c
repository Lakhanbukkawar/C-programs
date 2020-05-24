#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x y and z\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x<y && y<z)
    {
        printf("x is greater than y and z is greater than y");
    }
    else
    {
        printf("invalid");
    }
    getch();
}
