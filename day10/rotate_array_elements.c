#include <stdio.h>

int main() {
    int a[4],temp,i,j,k;
    printf("Enter the values in array a\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    scanf("%d",&k);
    printf("number of times u want to rotate the array=%d\n",k);
    for(i=0;i<k;i++)
    {
        temp=a[0];
        a[0]=a[3];
        for(j=2;j>0;j--)
        {
            a[j+1]=a[j];
        }
        a[1]=temp;
    }
      for(i=0;i<4;i++)
      {
          printf("a[%d]=%d\n",i,a[i]);
      }


    return 0;
}

