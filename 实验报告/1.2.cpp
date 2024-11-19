#include<iostream>
#define pi 3.14
using namespace std;
double r, h,v;

int main()
{
	cin >> r>>h;
	v = ((pi * r * r) * h) / 3;
	cout << v << endl;
	return 0;
}