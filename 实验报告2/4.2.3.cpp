#include<iostream>
using namespace std;
int n;

int main()
{
	int* a = new int[50];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for(int i=n;i>=1;i--)
		for (int j = 1; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	for (int i = 1; i <= n; i++)
		cout << a[i]<<" ";
	delete[] a;
	return 0;
}