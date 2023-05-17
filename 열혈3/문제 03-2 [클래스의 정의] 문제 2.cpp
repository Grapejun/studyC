#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Printer
{
private:
	char* str = new char[100];
public:
	void SetString(const char* str)
	{
		strcpy(this->str, str);
	}

	void ShowString()
	{
		cout << str << endl;
	}
};

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}
