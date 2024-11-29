#include<iostream>
#include<string>
using namespace std;
string sa, sb;
int ans, i;
int indexof(string a, string b)
{
	int cnt = 0;
	for (i = 0; i < b.size(); i++)
	{
		if (b[i] == a[cnt])
		{
			cnt++;
			if (cnt == a.size() - 1)break;
		}
		else cnt = 0;
	}
	if (i == b.size() - 1)return -1;
	else return i;
}

int main()
{
	getline(cin, sa);
	getline(cin, sb);
	ans = indexof(sa, sb);
	cout << ans << endl;
	return 0;
}


