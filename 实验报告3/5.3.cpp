#include<iostream>
using namespace std;
class Cube
{
private:
	int l, w, h,v;
public:
	void set_val(int x, int y, int z)
	{
		l = x;
		w = y;
		h = z;
	}
	void cal_vl()
	{
		cout<< l * w * h<<endl;
		return;
	}
};
Cube cu1, cu2, cu3;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	cu1.set_val(x, y, z);
	cu1.cal_vl();
	cin >> x >> y >> z;
	cu2.set_val(x, y, z);
	cu2.cal_vl();
	cin >> x >> y >> z;
	cu3.set_val(x, y, z);
	cu3.cal_vl();
	return 0;
}