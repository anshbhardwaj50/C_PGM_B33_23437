 #include <stdio.h>
 // Function to check if a year is a leap year
 int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        return 1;
    else
        return 0;
 }
 int main() {
    int year, i, total_days = 0, day;
    char *days_of_week[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };
    // Input year
    printf("Enter the year: ");
    scanf("%d", &year);
    // Count total number of days from 01/01/0001 to 01/01/year
    for (i = 1; i < year; i++) {
        if (isLeapYear(i))
            total_days += 366;
        else
            total_days += 365;
    }
    // Find the day index
    day = total_days % 7;
    // Output result
    printf("1st January of year %d is a %s.\n", year, days_of_week[day]);
    return 0;
 }
