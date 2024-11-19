#include<iostream>
using namespace std;
int a, b;
int ans1,ans2;

int main()
{
	cin >> a >> b;
	if (b > a)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i >= 1; i--)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				ans1 = i;
				cout << ans1<<endl;
				break;
			}
		}
	}
	
	ans2 = (a * b) / ans1;
	cout << ans2 << endl;
	return 0;
}