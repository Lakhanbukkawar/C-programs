#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    double a,b,c,discriminant,root1,root2,realpart,imagpart;
    printf("enter coefficients a b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0) //condition for real and different roots
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root1=%lf and root2=%lf",root1,root2);
    }
    else
        if(discriminant==0) //condition for real and equal roots
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%lf",root1);
    }
    else //if roots are not real
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realpart, imagpart, realpart, imagpart);
    }
    getch();

}
