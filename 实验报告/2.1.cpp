#include<iostream>
using namespace std;
char temp,ans;
int num;

int main()
{
	cin >> temp;
	if ('a' <= temp&&temp<='z')ans = temp - ('a' - 'A'), cout << ans << endl;
	else num = temp-1,cout<<num;
	return 0;
}