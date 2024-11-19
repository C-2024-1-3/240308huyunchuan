#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double a, x1, x2;
double temp;
int main()
{
	cin >> a;
	x2 = a;
	do
	{
		x1 = x2;
		x2 = (x1 + (a / x1))/2;
	} while (fabs(x1 - x2) > 10e-10);

	printf("%.6lf", x2);
	return 0;
}