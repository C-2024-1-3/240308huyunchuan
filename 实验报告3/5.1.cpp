#include<iostream>
using namespace std;
class Time
{
private:
	int hour,minute,sec;
public:
	void show_time()
	{
		cout << hour << " " << minute << " " << sec<<endl;
		return;
	}
	void set_time(int x,int y,int z)
	{
		hour = x;
		minute = y;
		sec = z;
		return;
	}
};

int main()
{
	int x, y, z; Time Mytime;
	cin >> x >> y >> z;
	Mytime.set_time(x, y, z);
	Mytime.show_time();
	return 0;
}