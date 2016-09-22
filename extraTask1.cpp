#include "extraTask1.h"

double seconds_difference(double time_1, double time_2) { return time_2 - time_1; }

double hours_difference(double time_1, double time_2) { return time_2 / 60.0 / 60.0 - time_1 / 60.0 / 60.0; }

double to_float_hours(int hours, int minutes, int seconds) { return hours + minutes / 60.0 + seconds / 60.0 / 60.0; }

double to_24_hour_clock(double hours)
{
	while (hours > 24.0)
		hours -= 24.0;
	if (hours == 24.0)
		hours = 0;
	return hours;
}

int get_hours(int seconds) { return floor(seconds / 60.0 / 60.0); }
int get_minutes(int seconds) { return floor(seconds / 60.0) - get_hours(seconds) * 60; }
int get_seconds(int seconds) { return seconds - get_hours(seconds) * 60 * 60 - get_minutes(seconds) * 60; }

double time_to_utc(int utc_offset, double time)
{
	double currTime = time - utc_offset;
	while (currTime > 24.0)
		currTime -= 24.0;
	if (currTime < 0.0)
		currTime = 24.0 + currTime;
	if (currTime == 24.0)
		currTime = 0;
	return currTime;
}

double time_from_utc(int utc_offset, double time)
{
	double currTime = time + utc_offset;
	while (currTime > 24.0)
		currTime -= 24.0;
	if (currTime < 0.0)
		currTime = 24.0 + currTime;
	if (currTime == 24.0)
		currTime = 0;
	return currTime;
}
