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
//		cout << "계좌번호 : " << id << endl;
//		cout << "이름 : " << name << endl;
//		cout << "잔액 : " << balance << endl;
//	}
//};
//
//class DonateAccount : public Account
//{
//private:
//	int donate; //기부금액
//
//public:
//	DonateAccount (int _id, int _balance, const char* _name, int _donate)
//		: Account(_id, _balance, _name), donate(_donate)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val; //기부금 1%를 저장하기위해 만든 변수
//		
//		val = money * 0.01; // 기부금 저장
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
//		cout << " 1. 계좌 개설 " << endl;
//		cout << " 2. 입금 " << endl;
//		cout << " 3. 출금 " << endl;
//		cout << " 4. 잔액 조회 " << endl;
//		cout << " 5. 프로그램 종료 " << endl;
//	}
//
//	void MakeAccount()
//	{
//
//		int count;
//
//		cout << endl;
//		cout << "계좌 개설 ---" << endl;
//		cout << "계좌 종류 선택해주세요" << endl;
//		cout << "1. 보통계좌 , 2. 기부계좌, 3. 신용계좌 " << endl;
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
//			cout << "잘못된 입력입니다" << endl;
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
//		cout << "계좌 ID: "; cin >> id;
//		cout << "이 름: "; cin >> name;
//		cout << "입금액: " ; cin >> balance;
//		cout << endl;
//		cout << endl;
//
//		pArray[index++] = new Account(id, balance, name);
//
//		cout << "보통계좌 생성완료!" << endl;
//	}
//
//	void MakeDonateAccount()
//	{
//		int id;
//		char name[20];
//		int balance;
//		int val = 0;
//
//		cout << "계좌 ID: "; cin >> id;
//		cout << "이 름: "; cin >> name;
//		cout << "입금액: "; cin >> balance;
//		cout << endl;
//		cout << "기부계좌 생성완료!" << endl;
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
//		cout << "계좌 ID: "; cin >> id;
//		cout << "이 름: "; cin >> name;
//		cout << "입금액: "; cin >> balance;
//		cout << endl;
//		cout << "계좌생성완료!" << endl;
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
//
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