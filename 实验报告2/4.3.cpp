#include<iostream>
using namespace std;
bool b[105];
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <= 100; j += i)
			if (b[i])b[i] = false;
			else b[i] = true;
	}
	for (int i = 1; i <= 100; i++)
		if (b[i])cout << i << " ";
	return 0;
}