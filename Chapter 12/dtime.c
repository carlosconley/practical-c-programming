/* dtime -- stores time and date, finds the difference between two times in minutes


#include <stdio.h>
#include <math.h>
// Struct that takes 24 hour clock time and date

struct date_time {
	unsigned int d_hour: 5;
	unsigned int d_minute: 6;
	unsigned int d_day: 5;
	unsigned int d_month: 4;
	unsigned int d_year: 12;
} date1, date2;

int time_diff (struct date_time date1, struct date_time date2);

int main(int argc, char const *argv[])
{
	// Assignment for test purposes
	date1.d_minute = 59;
	date2.d_minute = 58;
	date1.d_hour = 23;
	date2.d_hour = 23;
	date1.d_day = 31;
	date2.d_day = 31;
	date1.d_month = 12;
	date2.d_month = 11;
	date1.d_year = 2019;
	date2.d_year = 2020;


	printf("%d", time_diff(date1, date2));

	return 0;
}

// Find the difference in minutes
int time_diff (struct date_time date1, struct date_time date2)
{
	int diff;

	diff = ((date1.d_year - date2.d_year) * 525600 + (date1.d_month - date2.d_month) * 43800 + (date1.d_day - date2.d_day) * 1440 + (date1.d_hour - date2.d_hour) * 60 + (date1.d_minute - date2.d_minute));

	return abs(diff);
}
*/