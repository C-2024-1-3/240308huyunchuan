#include<iostream>
using namespace std;


int main()
{
	int wordcnt=0, blankcnt=0, numcnt=0, othercnt=1;		//ËãÉÏ»»ÐÐ·û
	char a;
	while((a=getchar())&&a!='\n')
	{
		if (a >= 'A' && a <= 'z')wordcnt++;
		else if (a == ' ')blankcnt++;
		else if (a >= '1' && a <= '9')numcnt++;
		else othercnt++;
	}
	cout << wordcnt << " " << blankcnt << " " << numcnt << " " << othercnt << endl;
	system("pause");
	return 0;
}