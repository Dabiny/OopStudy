//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int NAME_LEN = 20;
//
//enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//
//class AccountHandler
//{
//private:
//	Account* pArray[20];
//	int index;
//
//public:
//	AccountHandler():index(0){}
//	~AccountHandler()
//	{
//		for (int i = 0; i < index; i++)
//		{
//			delete pArray[i];
//		}
//	}
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
//		int id;
//		char name[20];
//		int balance;
//
//		cout << endl;
//		cout << "���� ���� ---" << endl;
//
//		cout << "���� ID: "; cin >> id;
//		cout << "�� ��: "; cin >> name;
//		cout << "�̸�: "; cin >> balance;
//		cout << endl;
//		cout << "���»����Ϸ�!" << endl;
//		cout << endl;
//
//		pArray[index++] = new Account(id, balance, name);
//	}
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
//	}
//	void Inquire()
//	{
//		for (int i = 0; i < index; i++)
//		{
//			pArray[i]->ShowInfo();
//			cout << endl;
//		}
//	}
//};
//
//class Account : public AccountHandler
//{
//private:
//	int id;
//	int balance;
//	char* name;
//
//public:
//	Account(int _id, int _balance, const char* _name){}
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
//	void DePositMoney(int money)
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