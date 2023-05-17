#include <stdio.h>

int main(void)
{
	int res = 0, cnt = 0, longest_cnt = 0;
	char word, check;

	while (res != -1)
	{
		res = scanf("%c", &word);

		check = getchar();

		if (check == '\n')
			cnt = 0;

		cnt++;

		if (cnt > longest_cnt)
			longest_cnt = cnt;
	}

	printf("가장 긴 단어의 길이 : %d\n", longest_cnt);

	return 0;
}

/*
#include <stdio.h>

int main(void)
{
	int res, cnt = 0, longest_cnt = 0;
	char word, check;

	while (1)
	{
		res = scanf("%c", &word);

		if (res == -1) break;
		check = getchar();

		if (check == '\n')
			cnt = 0;

		cnt++;

		if (cnt > longest_cnt)
			longest_cnt = cnt;
	}

	printf("가장 긴 단어의 길이 : %d\n", longest_cnt);

	return 0;
}*/