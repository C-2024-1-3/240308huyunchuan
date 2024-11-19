#include<iostream>
using namespace std;
double ans, x;

int main()
{
	cin >> x;
	if (0 < x && x < 1)ans = 3 - 2 * x;
	else if (1 <= x && x < 5)ans = 2 / (4 * x) + 1;
	else if (5 <= x && x < 10)ans = x * x;

	cout << ans << endl;
	return 0;
}