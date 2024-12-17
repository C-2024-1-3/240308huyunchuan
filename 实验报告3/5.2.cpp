#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
	return;
}
void Student::set_val(int x, const char* y, char z)
{
	num = x;
	strcpy_s(name, y);
	sex = z;
	return;
}