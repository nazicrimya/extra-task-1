#ifndef _EXTRATASK1_H
#define _EXTRATASK1_H
#include <cmath>
	// function seconds_difference(double, double): double
	// ¬озвращает разницу в колличествах секунд
	double seconds_difference(double, double);

	// function hours_difference(double, double): double
	// ¬озвращает разницу в колличествах часов
	double hours_difference(double, double);

	// function to_float_hours(int, int, int): double
	// ¬озвращает общее колличество часов
	double to_float_hours(int, int, int);

	// function to_24_hour_clock(double): double
	// ¬озвращает общее колличество часов в 24 формате
	double to_24_hour_clock(double);

	// function get_hours(int): int
	// ¬озвращает общее колличество часов от секунд
	int get_hours(int);

	// function get_minutes(int): int
	// ¬озвращает общее колличество часов от секунд
	int get_minutes(int);

	// function get_seconds(int): int
	// ¬озвращает общее колличество часов от секунд
	int get_seconds(int);

	// function time_to_utc(int, double): double
	// ¬озвращает врем€ в заданном формате utc-
	double time_to_utc(int, double);

	// function time_from_utc(int, double): double
	// ¬озвращает врем€ в заданном формате utc+
	double time_from_utc(int, double);
#endif // _EXTRATASK1_H