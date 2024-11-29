#include<iostream>
using namespace std;
int ans,day;

int dfs(int a)
{
	if (day == 10)return a;
	day++;
	a++;
	a *= 2;
	return dfs(a);
}

int main()
{
	day = 0;
	ans = dfs(1);
	cout << ans;
	return 0;
}