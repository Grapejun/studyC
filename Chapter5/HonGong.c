#include <stdio.h>
int main(void)
{
	int num1, num2;
	char cal;
	
	printf("��Ģ���� �Է�(����) : ");
	scanf("%d %c %d", &num1, &cal, &num2); // % �� d �� ���� �ȵ�. �ٿ� �����.

	switch (cal)
	{
	case '+':
		printf("%d%c%d=%d\n", num1, cal, num2, num1 + num2);
		break;
		
	case '-':
		printf("%d%c%d=%d\n", num1, cal, num2, num1 - num2);
		break;

	case '*':
		printf("%d%c%d=%d\n", num1, cal, num2, num1 * num2);
		break;

	case '/':
		printf("%d%c%d=%d\n", num1, cal, num2, num1 / num2);
		break;
	}

	return 0;

}