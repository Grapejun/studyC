#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

namespace COMP_POS
{
	enum GRADE
	{
		CLERK, SENIOR, ASSIST, MAMAGER
	};
}
class NameCard
{
private:
	char* name;
	char* company;
	char* phone;
	int grade;

public:
	NameCard(const char* Pname, const char* Pcompany, const char* Pphone, int Pgrade)
	{
		int len_name = strlen(Pname) + 1;
		name = new char[len_name];
		strcpy(name, Pname);

		int len_company = strlen(Pcompany) + 1;
		company = new char[len_company];
		strcpy(company, Pcompany);

		int len_phone = strlen(Pphone) + 1;
		phone = new char[len_phone];
		strcpy(phone, Pphone);

		grade = Pgrade;
	}

	NameCard(const NameCard& copy) : grade(copy.grade)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);

		company = new char[strlen(copy.company) + 1];
		strcpy(company, copy.company);

		phone = new char[strlen(copy.phone) + 1];
		strcpy(phone, copy.phone);

	}

	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;

		if (grade == 0)
			cout << "����: ���" << endl << endl;
		if (grade == 1)
			cout << "����: ����" << endl << endl;
		if (grade == 2)
			cout << "����: �븮" << endl << endl;
		if (grade == 3)
			cout << "����: �Ŵ���" << endl << endl;
	}

	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]phone;
		cout << "CONSTRUCTOR ȣ��!!" << endl;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();

	return 0;
}