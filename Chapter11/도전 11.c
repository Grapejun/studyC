#include <stdio.h>
int main(void)
{
	int i, j, cnt = 0, longest_cnt = 0;
	int ch;

	ch = getchar();

	while (ch != EOF)
	{
		cnt++;

		if (cnt > longest_cnt)
		{
			longest_cnt = cnt;
		}

		
		if (ch == '\n') {
			cnt = 0;

		}
			
		ch = getchar();
	}

	printf("���� �� �ܾ��� ���� : %d", longest_cnt - 1);
	return 0;
}