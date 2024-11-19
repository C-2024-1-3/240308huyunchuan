#include<iostream>
using namespace std;
int n;

int main()
{
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
			cout << '*';
		cout << endl;
	}
	return 0;
}