#include<iostream>
#define int long long
using namespace std;
int a, b, t;

inline gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
inline lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

signed main()
{
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		int temp = lcm(a, b);
		for (int i = a; i <= temp; i++)
		{
			if (a % i == b % i) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}