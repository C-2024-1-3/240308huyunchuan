#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud;
	stud.set_val(007, "tcg", 'm');
	stud.display();
	return 0;
}