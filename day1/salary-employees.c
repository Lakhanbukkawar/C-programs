#include <stdio.h>
#include <conio.h>
void main()
{
    char id[10];
    int hour;
    double value,salary;
    printf("enter the employees id(max 10 chars): ");
    scanf("%s",&id);
    printf("\nnumber of working hours: ");
    scanf("%d",&hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf",&value);
    salary=value*hour;
    printf("\nemployees id=%s \nSalary=Rs%lf\n",id,salary);
    getch();
}
