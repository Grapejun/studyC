#include <iostream>

int main(void)
{
	char name[100];
	char number[100];

	std::cout << "이름: ";
	std::cin >> name;

	std::cout << "전화번호: ";
	std::cin >> number;

	std::cout << "이름은 " << name << "이고 전화번호는 " << number << "이다.\n";


	return 0;
}