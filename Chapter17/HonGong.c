#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[10];
	int kor;
	int mat;
	int eng;
	int sum;
	double tot;
	char grade;
};
typedef struct student Student;
void input_data(Student *lp);
void print_data(Student* lp);

int main(void)
{
	Student list[5];
	input_data(list);

	print_data(list);

	return 0;
}
void input_data(Student *lp)
{
	int i;

	for (i = 0; i < 3; i++)
	{

		printf("학번 : ");
		scanf("%d", &(lp[i].num));

		printf("이름 : ");
		getchar();
		gets(&(lp[i].name));

		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d",&(lp[i].kor), &(lp[i].mat), &(lp[i].eng));
		getchar();

		lp[i].sum = (lp[i].kor + lp[i].mat + lp[i].eng);
		lp[i].tot = (lp[i].kor + lp[i].mat + lp[i].eng) / 3.0;
		
	
		if (lp[i].tot >= 90)
			lp[i].grade = 'A';
		else if (lp[i].tot >= 80)
			lp[i].grade = 'B';
		else if (lp[i].tot >= 70)
			lp[i].grade = 'C';
		else
			lp[i].grade = 'D';
	}
}




void print_data(Student* lp)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%s\t%d   %d   %d   %d   %.1lf   %c\n", lp[i].num, lp[i].name, lp[i].kor, lp[i].mat, lp[i].eng, lp[i].sum, lp[i].tot, lp[i].grade);

		return;
	}

}