#include <stdio.h>
#include <conio.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("enter any character\n");
    scanf("%s",&str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str1[i]='\0';
    printf("string after copying is=%s\n",str2);
    printf("number of character =%d",i);
    getch();
}
