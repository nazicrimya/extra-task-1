#include <iostream>
#include <assert.h>
#include "extraTask1.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
		// Тестирование функции seconds_difference() 
	cout << "Тестирование функции seconds_difference() - ";
	assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < 1E-5, "test-1");
	assert(fabs(seconds_difference(3600.0, 1800.0) + 1800.0) < 1E-5, "test-2");
	assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < 1E-5, "test-3");
	assert(fabs(seconds_difference(1800.0, 1800.0)) < 1E-5, "test-4");
	cout << "Успешно! " << endl;;

		// Тестирование функции hours_difference()
	cout << "Тестирование функции hours_difference() - ";
	assert(fabs(hours_difference(1800.0, 3600.0) - 0.5) < 1E-5, "test-5");
	assert(fabs(hours_difference(3600.0, 1800.0) + 0.5) < 1E-5, "test-6");
	assert(fabs(hours_difference(1800.0, 2160.0) - 0.1) < 1E-5, "test-7");
	assert(fabs(hours_difference(1800.0, 1800.0)) < 1E-5, "test-8");
	cout << "Успешно! " << endl;;

		// Тестирование функции to_float_hours()
	cout << "Тестирование функции to_float_hours() - ";
	assert(fabs(to_float_hours(0, 15, 0) - 0.25) < 1E-5, "test-9");
	assert(fabs(to_float_hours(2, 45, 9) - 2.7525) < 1E-5, "test-10");
	assert(fabs(to_float_hours(1, 0, 36) - 1.01) < 1E-5, "test-11");
	cout << "Успешно! " << endl;;

		// Тестирование функции to_24_hour_clock()
	cout << "Тестирование функции to_24_hour_clock() - ";
	assert(to_24_hour_clock(24) == 0.0, "test-12");
	assert(to_24_hour_clock(48) == 0.0, "test-13");
	assert(to_24_hour_clock(25) == 1.0, "test-14");
	assert(to_24_hour_clock(4) == 4.0, "test-15");
	assert(to_24_hour_clock(28.5) == 4.5, "test-16");
	cout << "Успешно! " << endl;;

		// Тестирование функции time_to_utc()
	cout << "Тестирование функции time_to_utc() - ";
	assert(fabs(time_to_utc(0, 12.0) - 12.0) < 1E-5, "test-17");
	assert(fabs(time_to_utc(1, 12.0) - 11.0) < 1E-5, "test-18");
	assert(fabs(time_to_utc(-1, 12.0) - 13.0) < 1E-5, "test-19");
	assert(fabs(time_to_utc(-11, 18.0) - 5.0) < 1E-5, "test-20");
	assert(fabs(time_to_utc(-1, 0.0) - 1.0) < 1E-5, "test-21");
	assert(fabs(time_to_utc(-1, 23.0)) < 1E-5, "test-22");
	cout << "Успешно! " << endl;;

		// Тестирование функции time_from_utc()
	cout << "Тестирование функции time_from_utc() - ";
	assert(fabs(time_from_utc(0, 12.0) - 12.0) < 1E-5, "test-23");
	assert(fabs(time_from_utc(1, 12.0) - 13.0) < 1E-5, "test-24");
	assert(fabs(time_from_utc(-1, 12.0) - 11.0) < 1E-5, "test-25");
	assert(fabs(time_from_utc(6, 6.0) - 12.0) < 1E-5, "test-26");
	assert(fabs(time_from_utc(-7, 6.0) - 23.0) < 1E-5, "test-27");
	assert(fabs(time_from_utc(-1, 0.0) - 23.0) < 1E-5, "test-28");
	assert(fabs(time_from_utc(-1, 23.0) - 22.0) < 1E-5, "test-29");
	assert(fabs(time_from_utc(1, 23.0)) < 1E-5, "test-30");
	cout << "Успешно! " << endl;;

	cout << "Все тесты прошли успешно!" << endl;
	system("pause");
	return 0;
}