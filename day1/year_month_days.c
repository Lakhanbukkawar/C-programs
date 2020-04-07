#include <stdio.h>
#include <conio.h>
void main()
{
    int days,weeks,years;
    printf("enter total number of days: ");
    scanf("%d",&days);
    //conversion
    years=(days/365);
    weeks= (days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("YEARS=%d\n",years);
    printf("WEEKS=%d\n",weeks);
    printf("DAYS=%d",days);
    getch();
}
