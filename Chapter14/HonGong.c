#include <stdio.h>

int main(void)
{
	int ary[5][6] = {
		{1, 2, 3, 4, 5, 0},
		{6, 7, 8, 9, 10, 0},
		{11, 12, 13, 14, 15, 0},
		{16, 17, 18, 19, 20, 0},
		{0, 0, 0, 0, 0, 0}
	};

	int i, j, num = 1;

/*	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ary[i][j] = num;
			num++;
		}
	}
*/

	for (j = 0; j < 5; j++)
	{
		ary[0][5] += ary[0][j];
	}

	for (i = 0; i < 4; i++)
	{
		ary[4][0] += ary[i][0];
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ary[4][5] +=  ary[i][j];
		}
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}


	return 0;


}