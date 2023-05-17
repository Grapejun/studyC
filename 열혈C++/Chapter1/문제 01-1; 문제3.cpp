#include <iostream>

int main(void)
{
	int num;
	int i, j;

	std::cout << "±¸±¸´Ü: ";
	std::cin >> num;

	for (i = 1; i < 10; i++)
	{
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}

	return 0;
}
