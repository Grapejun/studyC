#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf(" ");
			if (i == j || i + j == 4)
				printf("*");
		}

		printf("\n");
	}

	return 0;
}