#include <stdio.h>
int main(void)
{
	double height, weight, BMI;



	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf_s("%lf%lf", &weight, &height);

	height /= 100.0;

	BMI = weight / (height * height);

	((BMI >= 20.0) && (BMI < 25.0)) 
		? printf("표준입니다.\n") 
		: printf("체중관리가 필요합니다.\n");

	return 0;

}