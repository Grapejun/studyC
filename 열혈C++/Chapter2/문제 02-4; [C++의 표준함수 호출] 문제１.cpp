#include <iostream>
#include <cstring>
using namespace std;




int main(void)
{
    char str1[] = "result";
    char str2[30];
    char str3[50] = "aaaple!";

    strcpy_s(str2, str1);
    strcat_s(str3, str1);

    cout << strlen(str1)<<endl;
    cout << str2<<endl;
    cout <<str3<<endl;
    cout << strcmp(str1, str3)<<endl;

    return 0;
}




