// C program to display a calender

#include <stdio.h>
int isLeapYear( int year ) 
{
    return(year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int leapYears( int year ) 
{
    return year/4 - year/100 + year/400;
}

int todayOf( int year, int month, int day) 
{
    static int dayOfMonth[] = 
        { 0,0,31,59,90,120,151,181,212,243,273,304,334};

    return dayOfMonth[month] + day + ((month>2 && isLeapYear(year))? 1 : 0);
}

long days( int year, int month, int day)
{
    int lastYear;

    lastYear = year - 1;

    return 365 * lastYear + leapYears(lastYear) + todayOf(year,month,day);
}

void calendar(int year, int month)
{
    char *NameOfMonth[] = { "",
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    "Su Mo Tu We Th Fr Sa";
    int dayOfMonth[] =
        { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int weekOfTopDay;
    int i,day;

    weekOfTopDay = days(year, month, 1) % 7;
    if(isLeapYear(year))
        dayOfMonth[2] = 29;
    printf("\n     %s %d\n", NameOfMonth[month], year);
    printf("Su Mo Tu We Th Fr Sa \n");

    for(i=0;i<weekOfTopDay;i++)
        printf("   ");
    for(i=weekOfTopDay,day=1;day <= dayOfMonth[month];i++,day++){
        printf("%2d ",day);
        if(i % 7 == 6)
            printf("\n");
    }   
    printf("\n");
}

int main(){
    int year,month;

    printf("Enter the month and year (MM YYYY): ");
    scanf("%d %d", &month, &year);

    calendar(year, month);

    return 0;
}
