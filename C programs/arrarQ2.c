#include <stdio.h>
#include <conio.h>
void main()
{
 int i,n,a[4];
 printf("input the number of elements to store in the array");
 scanf("%d",&n);
 printf("input %d number of elemnts in the array :\n",n);
 for(i=0;i<=n;i++)
 {
     printf("element - %d : ",i);
     scanf("%d",&a[i]);
 }
 printf("\nthe values store in array are : \n");
 for(i=0;i<=n;i++)
 {
     printf("%d",a[i]);
 }
 printf("the value store in reverse are :\n");
 for(i=n-1;i>=0;i--)
 {
     printf("%d",a[i]);
 }
}
