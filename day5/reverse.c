#include <stdio.h>
#include <conio.h>
void main()
{
    int rev=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    printf("reverse number is=%d\n",rev);
    getch();
}
