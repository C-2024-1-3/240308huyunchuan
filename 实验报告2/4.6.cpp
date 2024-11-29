#include<iostream>
using namespace std;
char s[400];
int cnt[30];
int n;
void count(char a[], int b[])
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')cnt[1]++;
		if (a[i] == 'b' || a[i] == 'B')cnt[2]++;
		if (a[i] == 'c' || a[i] == 'C')cnt[3]++;
		if (a[i] == 'd' || a[i] == 'D')cnt[4]++;
		if (a[i] == 'e' || a[i] == 'E')cnt[5]++;
		if (a[i] == 'f' || a[i] == 'F')cnt[6]++;
		if (a[i] == 'g' || a[i] == 'G')cnt[7]++;
		if (a[i] == 'h' || a[i] == 'H')cnt[8]++;
		if (a[i] == 'i' || a[i] == 'I')cnt[9]++;
		if (a[i] == 'j' || a[i] == 'J')cnt[10]++; 
		if (a[i] == 'k' || a[i] == 'K')cnt[11]++;
		if (a[i] == 'l' || a[i] == 'L')cnt[12]++;
		if (a[i] == 'm' || a[i] == 'M')cnt[13]++;
		if (a[i] == 'n' || a[i] == 'N')cnt[14]++;
		if (a[i] == 'o' || a[i] == 'O')cnt[15]++;
		if (a[i] == 'p' || a[i] == 'P')cnt[16]++;
		if (a[i] == 'Q' || a[i] == 'q')cnt[17]++;
		if (a[i] == 'r' || a[i] == 'R')cnt[18]++;
		if (a[i] == 's' || a[i] == 'S')cnt[19]++;
		if (a[i] == 't' || a[i] == 'T')cnt[20]++;
		if (a[i] == 'u' || a[i] == 'U')cnt[21]++;
		if (a[i] == 'V' || a[i] == 'v')cnt[22]++;
		if (a[i] == 'w' || a[i] == 'W')cnt[23]++;
		if (a[i] == 'x' || a[i] == 'X')cnt[24]++;
		if (a[i] == 'Y' || a[i] == 'y')cnt[25]++;
		if (a[i] == 'z' || a[i] == 'Z')cnt[26]++;
	}


}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	count(s, cnt);
	for (int i = 1; i <= 26; i++)
	{
		if (cnt[i])cout << cnt[i] << endl;
	}
	return 0;
}