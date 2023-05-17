#include <stdio.h>

int main(void)
{
	char str[100];
	int i = 0;
	int count = 0;

	printf("문장 입력 : ");
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

	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", count);

	return 0;
}