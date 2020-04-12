#include <stdio.h>
#include <conio.h>
void main()
{
    int a[6],i,temp;
    printf("enter the array elements: \n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
      if(i < (6/2)) {
			temp = a[i];
			a[i] = a[6-(i+1)];
			a[6-(i+1)] = temp;
		}
    }
    for(i = 0; i<=5; i++) {
		printf("%d\n",a[i]);
	}
}
