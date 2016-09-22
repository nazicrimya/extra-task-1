#ifndef _EXTRATASK1_H
#define _EXTRATASK1_H
#include <cmath>
	// function seconds_difference(double, double): double
	// ���������� ������� � ������������ ������
	double seconds_difference(double, double);

	// function hours_difference(double, double): double
	// ���������� ������� � ������������ �����
	double hours_difference(double, double);

	// function to_float_hours(int, int, int): double
	// ���������� ����� ����������� �����
	double to_float_hours(int, int, int);

	// function to_24_hour_clock(double): double
	// ���������� ����� ����������� ����� � 24 �������
	double to_24_hour_clock(double);

	// function get_hours(int): int
	// ���������� ����� ����������� ����� �� ������
	int get_hours(int);

	// function get_minutes(int): int
	// ���������� ����� ����������� ����� �� ������
	int get_minutes(int);

	// function get_seconds(int): int
	// ���������� ����� ����������� ����� �� ������
	int get_seconds(int);

	// function time_to_utc(int, double): double
	// ���������� ����� � �������� ������� utc-
	double time_to_utc(int, double);

	// function time_from_utc(int, double): double
	// ���������� ����� � �������� ������� utc+
	double time_from_utc(int, double);
#endif // _EXTRATASK1_H