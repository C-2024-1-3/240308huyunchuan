#include<iostream>
#include<algorithm>
using namespace std;
int a[100], b[100], c[200];
int acnt, bcnt;
int main()
{
	int n, m;
	acnt = bcnt = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	a[n + 1] = 1e9;
	cin >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	sort(b + 1, b + 1 + m);
	b[m + 1] = 1e9;
	for (int i = 1; i <= n + m; i++)
	{
		if (a[acnt] > b[bcnt])c[i] = b[bcnt], bcnt++;
		else c[i] = a[acnt], acnt++;
	}
	for (int i = 1; i <= n + m; i++)
	{
		cout << c[i]<<" ";
	}
	return 0;
}