#include <iostream>
#include <cstring>
using namespace std;

class Calculator
{
private:
	//char gamerID[CAR_CONST::ID_LEN];
	//int num1;
	//int num2;
	int count1;
	int count2;
	int count3;
	int count4;
public:
	double Add(double A, double B);
	double Div(double A, double B);
	double Min(double A, double B);
	double Mul(double A, double B);
	void Init();
	void ShowOpCount();
};

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}

double Calculator::Add(double A, double B)
{
	count1++; // Calculator::count1++; µµ ¹®Á¦ ¾øÀ½.
	return A + B;
}

double Calculator::Min(double A, double B)
{
	count2++;
	return A - B;
}

double Calculator::Mul(double A, double B)
{
	count3++;
	return A * B;
}

double Calculator::Div(double A, double B)
{
	count4++;
	return A / B;
}

void Calculator::Init()
{
	//num1= 0;
	//num2 = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << count1 << " »¬¼À: " << count2 << " °ö¼À: " << count3 << " »¬¼À: " << count4 << endl;
}