#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, bool;
	int num = 2, count = 0;


	printf("> 양수 입력 : ");
	scanf("%d", &count);

	int* pi = (int *)malloc(count * sizeof(int));


	for (i = 0; i < count-1; i++)
	{
		bool = 0;

		pi[i] = num;
	

		
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				bool = 1;
				break;
			}

		}

		num++;

		if (bool == 0)
			printf("%5d", pi[i]);

		else
			printf("    X");

		if (num % 5 == 2)
			printf("\n");

	}
	return 0;
}