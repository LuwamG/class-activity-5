// class activity 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//sizes and limits

#include <iostream>
using namespace std;
int main()
{
	cout << "The type short has a size of " << sizeof(short) << " with a limit ";
	cout << numeric_limits<short>::max() << " maximum ";
	cout << "and minimum " << numeric_limits<short>::min() << endl;
	cout << "The type double has a size of " << sizeof(double) << " with a limit ";
	cout << numeric_limits<double>::max() << " maximum ";
	cout << "and minimum " << numeric_limits<double>::min() << endl;
	return 0;
}

