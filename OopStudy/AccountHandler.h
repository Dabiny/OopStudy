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
//		cout << "�Աݾ�: "; cin >> balance;
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