#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(const int price, const int num, const int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void showSalesResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	bool BuyApples(FruitSeller& seller, int money)
	{
		if (money < 0)
		{
			return false;
		}
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
		return true;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}

};


int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	if (!buyer.BuyApples(seller, -500)) {
		cout << "money�� 0���� ���� �� �����ϴ�." << endl;
	};

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.showSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}