//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int NAME_LEN = 20;
//
//enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//
//void PrintMenu();
//void MakeAccount();
//void Deposit();
//void Withdraw();
//void Inquire();
//
//class Account
//{
//private:
//	int id;
//	int balance;
//	char* name;
//
//public:
//	Account(int _id, int _balance, const char* _name);
//
//	Account(const Account& copy) :id(copy.id), balance(copy.balance), name(copy.name)
//	{
//		name = new char[strlen(copy.name) + 1];
//		strcpy(name, copy.name);
//	}
//
//	~Account();
//
//	int GetId() { return id; }
//	int GetBalance() { return balance; }
//	void DepositMoney(int money);
//	int WithDrawMoney(int money);
//	void ShowInfo();
//};
//
//Account::Account(int _id, int _balance, const char* _name)
//	:id(_id), balance(_balance)
//{
//	int len = strlen(_name) + 1;
//	name = new char[len];
//	strcpy(name, _name);
//}
//
//Account :: ~Account() { delete[]name; }
//
//void Account::DepositMoney(int money)
//{
//	this->balance += money;
//}
//
//int Account::WithDrawMoney(int money)
//{
//	this->balance -= money;
//	return balance;
//}
//
//void Account::ShowInfo()
//{
//	cout << "계좌번호: " << id << endl;
//	cout << "이름 : " << name << endl;
//	cout << "잔액 : " << balance << endl;
//}
//
//Account* pArray2[10];
//int index = 0;
//
//int main(void)
//{
//
//	int choice;
//
//	while (1)
//	{
//		PrintMenu();
//
//		cout << " 선택 : "; cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case MAKE:
//			MakeAccount();
//			break;
//
//		case DEPOSIT:
//			Deposit();
//			break;
//
//		case WITHDRAW:
//			Withdraw();
//			break;
//
//		case INQUIRE:
//			Inquire();
//			break;
//
//		case EXIT:
//			for (int i = 0; i < index; i++)
//			{
//				delete pArray2[i];
//			}
//
//			return 0;
//
//		default:
//			cout << "Illegal selection.. " << endl;
//			break;
//		}
//	}
//	return 0;
//}
//
//void PrintMenu()
//{
//	cout << "----MENU----" << endl;
//	cout << " 1. 계좌 개설 " << endl;
//	cout << " 2. 입금 " << endl;
//	cout << " 3. 출금 " << endl;
//	cout << " 4. 잔액 조회 " << endl;
//	cout << " 5. 프로그램 종료 " << endl;
//}
//
//void MakeAccount()
//{
//	int id;
//	char name [20]; //	포인터로 하면 안되고, 선언시 크기를 지정해줘야한다.. 
//	int balance;
//
//	cout << endl;
//	cout << " 계좌 개설 -----" << endl;
//
//	cout << " 계좌 ID : ";	cin >> id;
//	cout << " 이 름 : ";		cin >> name;
//	cout << " 입금액 : ";	cin >> balance;
//	cout << endl;
//	cout << "계좌생성완료!" << endl;
//	cout << endl;
//
//	pArray2[index++] = new Account(id, balance, name);
//
//}
//
//void Deposit()
//{
//	int money;
//	int id;
//
//	cout << endl;
//	cout << " 계좌 ID : ";	cin >> id;
//	cout << " 입금액 : ";	cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray2[i]->GetId() == id)
//		{
//			pArray2[i]->DepositMoney(money);
//		}
//	}
//
//	cout << "유효하지 않은 ID 입니다.." << endl;
//	cout << endl;
//}
//
//void Withdraw()
//{
//	int money;
//	int id;
//
//	cout << endl;
//	cout << "계좌 ID: ";		cin >> id;
//	cout << "출금액 : ";		cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray2[i]->GetId() == id)
//		{
//			if (pArray2[i]->GetBalance() < money)
//			{
//				cout << "잔액이 부족합니다 .." << endl;
//				cout << endl;
//				return;
//			}
//
//			pArray2[i]->WithDrawMoney(money);
//		}
//	}
//
//	cout << "유효하지 않은 ID입니다. " << endl;
//	cout << endl;
//}
//
//void Inquire()
//{
//	for (int i = 0; i < index; i++)
//	{
//		pArray2[i]->ShowInfo();
//		cout << endl;
//	}
//}
//
////	객체지향언어라고 해도 순번으로 프로그램이 호출된다. 
