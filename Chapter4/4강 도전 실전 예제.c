#include <stdio.h>
int main(void)
{
	double height, weight, BMI;



	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%lf%lf", &weight, &height);

	height /= 100.0;

	BMI = weight / (height * height);

	((BMI >= 20.0) && (BMI < 25.0)) 
		? printf("ǥ���Դϴ�.\n") 
		: printf("ü�߰����� �ʿ��մϴ�.\n");

	return 0;

}