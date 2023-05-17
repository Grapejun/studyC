#include <stdio.h>

void swap(char *str, void *pa, void *pb);

int main(void)
{
	int age1, age2;
	double height1, height2;


	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age1, &height1);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, height2);

	return 0;

}

void swap(char* str, void *pa, void *pb)
{
	if (str == &"int")
	{
		int pt;

		pt = *(int*)pa;
		*(int*)pa = *(int*)pb;
		*(int*)pb = pt;
	}

	//else
	if (str == &"double")
	{
		double pt;

		pt = *(double*)pa;
		*(double*)pa = *(double*)pb;
		*(double*)pb = pt;
	}

	return;
}

// 	if (*str == "int") 되지 않는다, 왜일까?? => *str이 int\0 이후까지 인식하는 것 아닐까??
// 	if (*str == "int\0") 역시 되지 않는다.
//
//	if (str == &"int") 되는 것을 보면 동일한 문자열은 주소를 공유한다.