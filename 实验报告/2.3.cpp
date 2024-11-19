#include<iostream>
#include<algorithm>
using namespace std;
int a[5],ans;

int main()
{
	for (int i = 1; i <= 3; i++)
		cin >> a[i];
	sort(a + 1, a + 4);
	if (a[1] + a[2] > a[3])
	{
		ans = a[1] + a[2] + a[3];
		if (a[1] == a[2])cout <<ans<<endl<< "为等腰三角形"<<endl;
	}
	else cout << "无法构成三角形";
	return 0;
}