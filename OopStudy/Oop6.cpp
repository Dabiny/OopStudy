//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int NAME_LEN = 20;
//
//enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//
//
//
//class Account 
//{
//private:
//	int id;
//	int balance;
//	char* name;
//
//public:
//	Account(int _id, int _balance, const char* _name)
//		: id(_id), balance(_balance)
//	{
//		name = new char[strlen(_name) + 1];
//		strcpy(name, _name);
//	}
//	Account(const Account& copy) : id(copy.id), balance(copy.balance), name(copy.name)
//	{
//		name = new char[strlen(copy.name) + 1];
//		strcpy(name, copy.name);
//	}
//
//	~Account()
//	{
//		delete[]name;
//	}
//
//	int GetId() const { return id; }
//	int GetBalance() const { return balance; }
//
//	virtual void DePositMoney(int money)
//	{
//		this->balance += money;
//	}
//
//	int WithDrawMoney(int money)
//	{
//		this->balance -= money;
//		return balance;
//	}
//
//	void ShowInfo() const
//	{
//		cout << "���¹�ȣ : " << id << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "�ܾ� : " << balance << endl;
//	}
//};
//
//class DonateAccount : public Account
//{
//private:
//	int donate; //��αݾ�
//
//public:
//	DonateAccount (int _id, int _balance, const char* _name, int _donate)
//		: Account(_id, _balance, _name), donate(_donate)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val; //��α� 1%�� �����ϱ����� ���� ����
//		
//		val = money * 0.01; // ��α� ����
//
//		Account::DePositMoney(money - val);
//
//		this->donate += val;
//	}
//
//};
//
//class CreditAccount : public DonateAccount
//{
//private:
//	int credit;
//
//public:
//	CreditAccount(int _id, int _balance, const char* _name, int _donate, int _credit)
//		: DonateAccount(_id, _balance, _name, _donate), credit(_credit)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val;
//
//		val = money * 0.01;
//		Account::DePositMoney(money + val);
//
//		this->credit += val;
//	}
//
//};
//
//class AccountHandler
//{
//private:
//	Account* pArray[100];
//	int index;
//
//public:
//	AccountHandler() :index(0) {}
//
//	void PrintMenu()
//	{
//		cout << "----MENU----" << endl;
//		cout << " 1. ���� ���� " << endl;
//		cout << " 2. �Ա� " << endl;
//		cout << " 3. ��� " << endl;
//		cout << " 4. �ܾ� ��ȸ " << endl;
//		cout << " 5. ���α׷� ���� " << endl;
//	}
//
//	void MakeAccount()
//	{
//
//		int count;
//
//		cout << endl;
//		cout << "���� ���� ---" << endl;
//		cout << "���� ���� �������ּ���" << endl;
//		cout << "1. ������� , 2. ��ΰ���, 3. �ſ���� " << endl;
//		cin >> count;
//
//		if (count == 1)
//		{
//			MakeNomalAccount();
//		}
//		else if (count == 2)
//		{
//			MakeDonateAccount();
//		}
//		else if (count == 3)
//		{
//			MakeCreditAccount();
//		}
//		else
//		{
//			cout << "�߸��� �Է��Դϴ�" << endl;
//			return;
//		}
//
//	}
//
//	void MakeNomalAccount()
//	{
//		int id;
//		char name[20];
//		int balance;
//
//		cout << "���� ID: "; cin >> id;
//		cout << "�� ��: "; cin >> name;
//		cout << "�Աݾ�: " ; cin >> balance;
//		cout << endl;
//		cout << endl;
//
//		pArray[index++] = new Account(id, balance, name);
//
//		cout << "������� �����Ϸ�!" << endl;
//	}
//
//	void MakeDonateAccount()
//	{
//		int id;
//		char name[20];
//		int balance;
//		int val = 0;
//
//		cout << "���� ID: "; cin >> id;
//		cout << "�� ��: "; cin >> name;
//		cout << "�Աݾ�: "; cin >> balance;
//		cout << endl;
//		cout << "��ΰ��� �����Ϸ�!" << endl;
//		cout << endl;
//
//		pArray[index++] = new DonateAccount(id, balance, name, val);
//	}
//
//	void MakeCreditAccount()
//	{
//		int id;
//		char name[20];
//		int balance;
//		int val = 0;
//		int cre = 0;
//
//		cout << "���� ID: "; cin >> id;
//		cout << "�� ��: "; cin >> name;
//		cout << "�Աݾ�: "; cin >> balance;
//		cout << endl;
//		cout << "���»����Ϸ�!" << endl;
//		cout << endl;
//
//		pArray[index++] = new CreditAccount(id, balance, name, val, cre);
//	}
//
//	void Deposit()
//	{
//		int money;
//		int id;
//
//		cout << endl;
//		cout << "���� ID: "; cin >> id;
//		cout << "�Աݾ�: "; cin >> money;
//
//		for (int i = 0; i < index; i++)
//		{
//			if (pArray[i]->GetId() == id)
//			{
//				pArray[i]->DePositMoney(money);
//			}
//			else
//			{
//				cout << "��ȿ���� ���� ID�Դϴ�..." << endl;
//			}
//		}
//
//		cout << endl;
//	}
//
//	void WithDraw()
//	{
//		int money;
//		int id;
//
//		cout << endl;
//		cout << "���� ID: ";		cin >> id;
//		cout << "��ݾ� : ";		cin >> money;
//
//		for (int i = 0; i < index; i++)
//		{
//			if (pArray[i]->GetId() == id)
//			{
//				if (pArray[i]->GetBalance() < money)
//				{
//					cout << "�ܾ��� �����մϴ� .." << endl;
//					cout << endl;
//					return;
//				}
//				else
//				{
//					cout << "��ȿ���� ���� ID�Դϴ�. " << endl;
//				}
//				pArray[i]->WithDrawMoney(money);
//			}
//		}
//
//		cout << endl;
//
//	}
//
//	void Inquire()
//	{
//		for (int i = 0; i < index; i++)
//		{
//			pArray[i]->ShowInfo();
//			cout << endl;
//		}
//	}
//
//	~AccountHandler()
//	{
//		for (int i = 0; i < index; i++)
//		{
//			delete pArray[i];
//		}
//	}
//};
//
//int main(void)
//{
//	AccountHandler handler;
//	int choice;
//
//	while (1)
//	{
//		handler.PrintMenu();
//
//		cout << " ���� : "; cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case MAKE:
//			handler.MakeAccount();
//			break;
//
//		case DEPOSIT:
//			handler.Deposit();
//			break;
//
//		case WITHDRAW:
//			handler.WithDraw();
//			break;
//
//		case INQUIRE:
//			handler.Inquire();
//			break;
//
//		case EXIT:
//			return 0;
//
//		default:
//			cout << "Illegal selection.. " << endl;
//			break;
//		}
//	}
//	return 0;
//}