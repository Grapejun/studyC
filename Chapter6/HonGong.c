#include <stdio.h>
int main(void)
{
	int i, j, count = 1;
	int num;

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("2\t"); // 2�� ������ ��µǴ� �Ҽ�

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