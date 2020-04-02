#include <stdio.h>
#include <conio.h>
void main()
{
 int num,rem;
 printf("enter number from keyboard");
 scanf("%d",&num);
 rem=num%4;
 if(rem==0)
 {
     printf("number is divisible by 4");
 }
 if(rem!=0)
 {
     printf("number not divisible by 4");
 }
 getch();
}
