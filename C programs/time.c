#include <stdio.h>
#include <conio.h>
void main()
{
    int t;
    printf("enter time");
    scanf("%d",&t);
    if(t>5 && t<12)
    {
        printf("good morinig");
    }
    else
        if(t>=12 && t<16)
    {
        printf("good afternoon");
    }
    else
        if(t>=16 && t<21)
    {
        printf("good evening");
    }
    else
    {
        printf("good night");
    }
    getch();
}
