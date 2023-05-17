#include <iostream>
using namespace std;

class Calculator
{
private:
	int count_Add;
	int count_Div;
	int count_Min;
	int count_Mul;

public:
	void Init() {
		count_Add = 0;
		count_Div = 0;
		count_Min = 0;
		count_Mul = 0;

	}
	double Add(double a, double b) {
		count_Add++;
		return a + b;
	}

	double Div(double a, double b) {
		count_Div++;
		return a / b;
	}

	double Min(double a, double b) {
		count_Min++;
		return a - b;
	}

	double Mul(double a, double b) {
		count_Mul++;
		return a * b;
	}
	void ShowOpCount() {
		cout << "µ¡¼À: " << count_Add << " " << "»¬¼À: " << count_Min << " " << "°ö¼À: " << count_Mul << " " << "³ª´°¼À: " << count_Div << endl;
	}
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