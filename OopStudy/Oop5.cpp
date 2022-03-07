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
//		cout << " 1. 계좌 개설 " << endl;
//		cout << " 2. 입금 " << endl;
//		cout << " 3. 출금 " << endl;
//		cout << " 4. 잔액 조회 " << endl;
//		cout << " 5. 프로그램 종료 " << endl;
//	}
//
//	void MakeAccount()
//	{
//		int id;
//		char name[20];
//		int balance;
//
//		cout << endl;
//		cout << "계좌 개설 ---" << endl;
//
//		cout << "계좌 ID: "; cin >> id;
//		cout << "이 름: "; cin >> name;
//		cout << "이름: "; cin >> balance;
//		cout << endl;
//		cout << "계좌생성완료!" << endl;
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
//		cout << "계좌 ID: "; cin >> id;
//		cout << "입금액: "; cin >> money;
//
//		for (int i = 0; i < index; i++)
//		{
//			if (pArray[i]->GetId() == id)
//			{
//				pArray[i]->DePositMoney(money);
//			}
//			else
//			{
//				cout << "유효하지 않은 ID입니다..." << endl;
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
//		cout << "계좌 ID: ";		cin >> id;
//		cout << "출금액 : ";		cin >> money;
//
//		for (int i = 0; i < index; i++)
//		{
//			if (pArray[i]->GetId() == id)
//			{
//				if (pArray[i]->GetBalance() < money)
//				{
//					cout << "잔액이 부족합니다 .." << endl;
//					cout << endl;
//					return;
//				}
//				else
//				{
//					cout << "유효하지 않은 ID입니다. " << endl;
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
//		cout << "계좌번호 : " << id << endl;
//		cout << "이름 : " << name << endl;
//		cout << "잔액 : " << balance << endl;
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
//		cout << " 선택 : "; cin >> choice;
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