#include<iostream>
#include<algorithm>
using namespace std;
class Student
{
public:
	int id, score;
};
Student sarr[10];

int Max(Student arr[])
{
	int mans = 0;
	for (int i=0;i<5;i++)
	{
		mans = max(mans, arr[i].score);
	}
	return mans;
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> sarr[i].id >> sarr[i].score;
	}
	cout << Max(sarr) << endl;
	return 0;
}
