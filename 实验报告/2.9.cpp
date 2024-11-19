#include<iostream>
#define pri 0.8
using namespace std;
int a[100];
int i,num,cnt;
double ans;
double sum;

int main()
{
	num = 2,cnt=0;
	for (i = 1; ;i++)
	{
		if (num >= 100)break;
		a[i] = num,cnt++;
		num *= 2;
	}
	for (int j = 1; j <= cnt; j++)
	{
		sum += a[j];
	}
	sum /= cnt;
	ans = sum * pri;
	cout << ans << endl;
	return 0;
}