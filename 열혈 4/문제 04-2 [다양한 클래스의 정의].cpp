#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Ring
{
private:
	Point* cen1 = new Point; // 힙 영역 메모리 할당
	int radius1;

	Point cen2; //스택 영역 메모리 할당
	int radius2;
public:

	void Init(int a, int b, int c, int x, int y, int z)
	{
		cen1->Init(a, b);
		radius1 = c;

		cen2.Init(x, y);
		radius2 = z;

	}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		cout << "radius: " << radius1 << endl;
		cen1->ShowPointInfo();

		cout << "Outer Circle Info..." << endl;
		cout << "radius: " << radius2 << endl;
		cen2.ShowPointInfo();

	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}