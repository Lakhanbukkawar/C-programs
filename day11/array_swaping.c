#include <stdio.h>
#include <conio.h>
void main()
{
int a[10];
int c,i;
printf("enter the elements");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
c=a[0+i];
a[0+i]=a[9-i];
a[9-i]=c;
}
for(i=0;i<=9;i++)
{
printf("%d",a[i]);
}
getch();
}
