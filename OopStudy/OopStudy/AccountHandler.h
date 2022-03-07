//#include "deefine.h"
//#include "Account.h"
//#include "CreditAccount.h"
//#include "DonateAccount.h"
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
//		cout << "입금액: "; cin >> balance;
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