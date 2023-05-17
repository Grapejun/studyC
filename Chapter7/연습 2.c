#include <stdio.h>
int sum(int a);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}

int sum(int a)
{
	int sum_num = 0;
	int count;

	for (count = 1; count <= a; count++)
	{
		sum_num += count;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", a, sum_num);
}