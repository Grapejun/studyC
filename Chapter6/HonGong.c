#include <stdio.h>
int main(void)
{
	int i, j, count = 1;
	int num;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	printf("2\t"); // 2는 무조건 출력되는 소수

	for (i = 2; i <= num; i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;

			else if (j == i - 1) {

				printf("%d\t", i);
				count += 1;

				if (count % 5 == 0)
					printf("\n");
			}

		}


	}
	return 0;
}