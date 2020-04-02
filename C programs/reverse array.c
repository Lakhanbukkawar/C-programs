#include <stdio.h>
#include <conio.h>
void main()
{
    int array[100],n,t,c,end;
    scanf("%d",&n);
    end=n-1;
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    for(c=0;c<n/2;c++)
    {
        t=array[c];
        array[c]=array[end];
        array[end]=t;
        end--;
    }
    printf("reversed array element are:\n");
    for(c=0;c<n;c++)
    {
        printf("%d\n",array[c]);
    }
    getch();

}
