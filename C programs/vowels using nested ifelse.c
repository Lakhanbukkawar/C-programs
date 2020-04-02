#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch=='a'||'A')
    {
        printf("entered character is vowel");
    }
    else
        if(ch=='e'||'E')
    {
        printf("entered character is vowel");
    }
    else
        if(ch=='i'||'I')
    {
        printf("entered character is vowel");
    }
    else
        if(ch=='o'||'O')
    {
        printf("enterd character is vowel");
    }
    else
    if(ch=='u'||'U')
    {
        printf("entered charcter is vowel");
    }
    else
    {
        printf("entered character is not vowel");
    }
    getch();
}
