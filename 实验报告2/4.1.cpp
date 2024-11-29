#include<iostream>
using namespace std;
int a[200000], b[200000];
int temp,cnt;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		cin >> temp;
		if (b[temp])continue;
		a[++cnt] = temp;
		b[temp] = 1;
	}
	for (int i = 1; i <= cnt; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}