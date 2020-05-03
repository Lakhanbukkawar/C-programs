#include <stdio.h>
#include <conio.h>
void main()
{
    int num,absval ;
    printf("Enter any negative integer: ") ;
    scanf("%d",&num) ;

    if(num<0)
    {
        absval  = -1*(num) ;
         printf("The Absolute Value of %d is %d", num, absval) ;
    }
    else
    printf("The Absolute Value of %d is %d", num, num) ;

}
