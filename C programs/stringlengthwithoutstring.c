#include <stdio.h>
#include <conio.h>
void main()
{
    char name[50];
    int count=0;
    printf("enter a name to get its length\n");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    printf("string length is %d\n",count);
    getch();
}
