#include <stdio.h>
#include <conio.h>
void main()
{
    char name[10];
    printf("enter a name to make it reverse\n");
    scanf("%s",name);
    for(int i=9;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    printf("\n");
    getch();
}
