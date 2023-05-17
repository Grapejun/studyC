#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[16];
	char word_put[16];
	int len = 0;

	char string[11] = "**********";
	
	printf("단어 입력 : ");
	scanf("%s", word_put);

	if (strlen(word_put) > 5)
	{
		strncpy(word, word_put, 5);
		word[5] = '\0';
		len = strlen(word_put);
		strncat(word, string, len - 5);
	}

	else
	{
		strncpy(word, word_put, 5);
		word[5] = '\0';
	}

	printf("입력한 단어 :%s , 생략한 단어 :%s ", word_put, word);

	return 0;
}