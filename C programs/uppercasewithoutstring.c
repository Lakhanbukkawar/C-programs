#include <stdio.h>
#include <conio.h>
void main()
{
    char str1[50];
    int i;
    printf("enter the string\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str1[i]=str1[i]-32;
    }
    printf("the given string is upper case=%s",str1);
    getch();
}
