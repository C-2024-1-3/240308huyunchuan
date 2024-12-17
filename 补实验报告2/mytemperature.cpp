#include"mytemperature.h"
double Celsius_to_fah(double cel)
{
	double fah;
	fah = cel * (1.8) + 32.0;
	return fah;
}
double Fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32.0) / (1.8);
	return cel;
}