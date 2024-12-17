#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int a, int b)
	{
		x = a, y = b;
	}
	void set_point(int i, int j)
	{
		x += i; y += j;
	}
	void display()
	{
		cout << x << " " << y <<endl;
	}
};

int main()
{
	Point pos(60, 80);
	int offx, offy;
	cin >> offx >> offy;
	pos.set_point(offx, offy);
	pos.display();
	return 0;
}