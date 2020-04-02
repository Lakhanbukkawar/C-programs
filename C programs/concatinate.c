#include <stdio.h>
#include <conio.h>
void main()
{
    char str1[50],str2[50];
    int i,k=0;
    printf("enter the first string\n");
    scanf("%s",str1);
    printf("enter the second string\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        k++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str1[k+i]=str2[i];
    }
    printf("after concat:%s",str1);
    getch();
}
