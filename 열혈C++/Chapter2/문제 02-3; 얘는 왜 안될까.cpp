#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    
   // Point* pptr = new Point;
    //pptr->xpos = p1.xpos + p2.xpos;
    //pptr->ypos = p1.ypos + p2.ypos;
    //return *pptr;
    // (* pptr).xpos=p1.xpos == pptr -> xpos=p1.xpos
    
    // const int* &ptr1 = new int;
    // const int &ptr1 = p1 + p2;
    const Point &sump = {p1.xpos + p2.xpos, p1.ypos + p2.ypos};
    return sump;
    
    
    //const Point &sump.ypos = p1.ypos + p2.ypos;
    //return sump;
}

int main(void)
{
    Point* pptr1 = new Point;
    
    pptr1->xpos = 1;
    pptr1->ypos = 2;

    Point* pptr2 = new Point;

    pptr2->xpos = 30;
    pptr2->ypos = 40;

    Point& pref = PntAdder(*pptr1, *pptr2);

    cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;


    delete pptr1;
    delete pptr2;
    delete& pref;

    return 0;
}




