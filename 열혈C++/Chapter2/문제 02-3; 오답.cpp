#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    // const int* &ptr1 = new int;
    // const int &ptr1 = p1 + p2;
    const Point &sump.xpos = p1.xpos + p2.xpos;
    const Point &sump.ypos = p1.ypos + p2.ypos;

    return sump;


}

int main(void)
{
    Point* var = new Point;
    
    Point a.xpos = 1;
    Point a.ypos = 2;

    Point b.xpos = 1;
    Point b.ypos = 2;

    var = PntAdder(a, b);

    cout << a << endl;


    delete var;

    return 0;
}




