#include <iostream>
#include <cstring>
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
	
	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;

		if(grade == 0)
			cout << "����: ���" << endl<<endl;
		if (grade == 1)
			cout << "����: ����" << endl << endl;
		if (grade == 2)
			cout << "����: �븮" << endl << endl;
		if (grade == 3)
			cout << "����: �Ŵ���" << endl << endl;
	}

	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}