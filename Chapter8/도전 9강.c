#include <stdio.h>

int main(void)
{
	char str[100];
	int i = 0;
	int count = 0;

	printf("���� �Է� : ");
	gets(str);

	while (str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
		{
			str[i] += 32;

			count += 1;

		}

		i++;
	}

	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", count);

	return 0;
}