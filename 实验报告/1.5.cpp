#include<iostream>
#include<iomanip>
using namespace std;
double temp, ans;
int main()
{
	cin >> temp;
	temp -= 32;
	ans = 5*temp;
	ans /= 9;
	printf("%.2lf", ans);
	return 0;
}