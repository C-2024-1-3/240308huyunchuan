#include<iostream>
using namespace std;
int cnt,encnt;

bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)return false;
	}
	return true;
}
int main()
{
	
	
		for (int i = 2;; i++)
			if (is_prime(i))
			{
				cout << i << " ";
				cnt++; encnt++;
				if (encnt == 10)
				{
					cout << endl;
					encnt = 0;
				}
				if (cnt == 200)break;
			}
	return 0;
}