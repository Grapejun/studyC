#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y)
		:xpos(x), ypos(y)
	{
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
class Circle
{
private:
	int rad;
	Point center;
public:
	Circle(int r, Point c)
		:rad(r), center(c)
	{
	}

	void ShowCircleInfo() const
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};
class Ring
{
private:
	Circle inCircle;
	Circle outCircle;
public:
	Ring(int x, int y, int z, int a, int b, int c)
		:inCircle(z, Point(x, y)), outCircle(c, Point(a, b))
	{}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();

		cout << "Outer Circle Info..." << endl;
		outCircle.ShowCircleInfo();

	}
};

int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}