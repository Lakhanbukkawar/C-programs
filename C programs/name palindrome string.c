#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int i;
    printf("enter the name \n");
    scanf("%s",a);
    strcpy(b,a);
    strrev(b);
    i=strcmp(a,b);
    if(i==0)
    {
        printf("the name is palindrome \n");
    }
    else
    {
        printf("the name isn't palindrome");
    }
    getch();
}
