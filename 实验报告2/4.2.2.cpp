#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string num;
int ans;

int main()
{
	cin >> num;
	for (int i = 0; i < num.size(); i++)
	{
		int temp = (int)(num[i] - 48);
		temp *= pow(10, num.size() - 1 - i);
		ans += temp;
	}
	cout << hex << ans << endl;
	return 0;
}