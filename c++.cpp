#include <iostream>
using namespace std;

int main(void)
{


    const int num = 12;
    const int *ptr = &num;
    const int *(&tptr) = ptr;

    cout << *ptr << endl;
    cout << *tptr << endl;

    return 0;
}




