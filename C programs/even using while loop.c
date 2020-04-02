#include <stdio.h>
#include <conio.h>
void main()
{
    int count,n;
    count=1;
    printf("enter any digit");
    scanf("%d",&n);
    while(count<=10 && count%2==0)
    {
        printf("%d",count);
        count++;
    }
    getch();
}
