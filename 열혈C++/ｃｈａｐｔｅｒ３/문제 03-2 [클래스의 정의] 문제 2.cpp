#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	//char gamerID[CAR_CONST::ID_LEN];
	//char* string;
	char var[100];
public:

	void SetString(const char * string);
	void ShowString();
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

void Printer::SetString(const char* string)
{
	strcpy_s(var, string);
}

void Printer::ShowString()
{
	cout << var << endl;
}