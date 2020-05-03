#include <stdio.h>
#include <conio.h>
#define MAX 10
void main()
{
   int a,n,bi;
   printf("Mx  ");
   for(n=0;n<=10;n++)
   printf("%d ",n);
   n=0;
   do
   {
       a=0,bi=1;
       printf("%2d",n);
       while(a<=n)
       {
           if(n==0 || a==0)
            printf("%4d",bi);
           else
           {
               bi=bi*(n-a+1)/a;
               printf("%4d",bi);
           }
           a=a+1;
       }
       printf("\n");
       n=n+1;
   }
   while(n<=MAX);
getch();
}
