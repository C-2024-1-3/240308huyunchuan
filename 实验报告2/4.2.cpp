#include<iostream>
using namespace std;
double list[20];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> list[i];
	}

	for (int j = n; j >=1; j--)
	for (int i = 1; i < j; i++)
	{
		if (list[i + 1] < list[i])
		{
			double temp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = temp;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}