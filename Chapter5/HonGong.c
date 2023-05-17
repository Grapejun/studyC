#include <stdio.h>
int main(void)
{
	int num1, num2;
	char cal;
	
	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &num1, &cal, &num2); // % 랑 d 띄어서 쓰면 안됨. 붙여 써야함.

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