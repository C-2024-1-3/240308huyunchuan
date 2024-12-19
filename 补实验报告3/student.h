#pragma once
#include<iostream>
class Student
{
private:
	int num;
	char name[20], sex;
public:
	void display();
	void set_val(int x, const char* y, char z);
};
