#include <iostream>

int main(void)
{
	int num = 0;
	int i;

	while (true)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> num;

		if (num == -1)
			break;

		std::cout << "�̹� �� �޿�: " << 50 + num * 0.12 << "����\n";
	}

	std::cout << "���α׷��� �����մϴ�.";

	return 0;

}