#include <stdio.h>
#include <conio.h>
void main()
{
    char str1[10],str2[10];
    int i;
    printf("enter the string\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("string copied %s",str2);
    getch();
}
