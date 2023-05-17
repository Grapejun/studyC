#include <iostream>
using namespace std;

void Plus1(int& ref1)
{
	ref1++;
}

void Change(int& ref1)
{
	ref1 = -ref1;
}

int main(void)
{
	int val1 = 10;

	Plus1(val1);
	cout << "val1: " << val1 << endl;

	Change(val1);
	cout << "val1: " << val1 << endl;
	return 0;
}