#include <stdio.h>

void main ()
{
    int day,month,year,dayOfTheYear=0,selectedMonthMaxDays;
    printf("year=");
    scanf("%d", &year);
    do
    {
        printf("month=");
        scanf("%d", &month);
    } while (month < 0 || month > 12);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) selectedMonthMaxDays = 31;
    if(month == 2)
        {
            if(year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) selectedMonthMaxDays = 29;
            else selectedMonthMaxDays = 28;
        }
    if(month == 4 || month == 6 || month == 9 || month == 11) selectedMonthMaxDays  = 30;
    do
    {
        printf("day=");
        scanf("%d", &day);
    } while(day < 0 || day > selectedMonthMaxDays);
    for (int i=1;i<month;i++) 
    {
        if(i==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) dayOfTheYear+=31;
        if(i==2)
        {
            if(year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) dayOfTheYear += 29;
            else dayOfTheYear += 28;
        }
        if(i==4 || i == 6 || i == 9 || i == 11) dayOfTheYear+=30;
    }
    dayOfTheYear += day;
    printf("Day of the year is %d", dayOfTheYear);
}