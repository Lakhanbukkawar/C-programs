#include <stdio.h>
#include <conio.h>
void main()
{
    int pass,b;
    while(b!=0)
    {
        printf("enter the password\n");
        scanf("%d",&pass);
        if(pass==1234)
        {
            printf("correct password\n");
            b=0;
        }
        else
        {
            printf("incorrect password\n");
        }
    }
    getch();
}
