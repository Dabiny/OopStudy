//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
////using namespace std;
////
////const int NAME_LEN = 20;
////int index = 1;
////enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
////
////void PrintMenu()
////{
////	cout << "----MENU----" << endl;
////	cout << " 1. ���� ���� " << endl;
////	cout << " 2. �Ա� " << endl;
////	cout << " 3. ��� " << endl;
////	cout << " 4. �ܾ� ��ȸ " << endl;
////	cout << " 5. ���α׷� ���� " << endl;
////}
////
////
////
////class Account
////{
////private:
////	int id;
////	int balance;
////	char* name;
////
////public:
////	Account(int _id, int _balance, const char* _name);
////	~Account();
////	
////	void MakeAccount();
////	void Deposit();
////	void Withdraw();
////	void Inquire();
////
////};
////
////Account* pArray2[10];
////
////Account :: Account(int _id, int _balance, const char* _name)
////	:id(_id),balance(_balance)
////{
////	int len = strlen(_name) + 1;
////	name = new char[len];
////	strcpy(name, _name);
////}
////
////Account :: ~Account () {}
////
////void Account :: MakeAccount() //���� ����
////{
////	int id;
////	char* name;
////	int balance;
////
////	cout << " ���� ���� -----" << endl;
////
////	cout << " ���� ID : ";	cin >> id;
////	cout << " �� �� : ";		cin >> name;
////	cout << " �Աݾ� : ";	cin >> balance;
////
////	for (int i = 0; i < ::index; i++)
////	{
////		if (pArray2[i]->id != id)
////		{
////			pArray2[i]->id = id;
////			pArray2[i]->name = name;
////			pArray2[i]->balance = balance;
////		}
////		else
////		{
////			cout << "�ߺ��� ���¹�ȣ�Դϴ�.." << endl;
////			return;
////		}
////	}
////	
////	::index++;
////
////}
////
////void Account :: Deposit()
////{
////	int money;
////	int id;
////
////	cout << " ���� ID : ";	cin >> id;
////	cout << " �Աݾ� : ";	cin >> money;
////
////	for (int i = 0; i < ::index; i++)
////	{
////		if (pArray2[i]->id == id)
////		{
////			pArray2[i]->balance += money;
////			cout << "�Ա� �Ϸ� !" << endl;
////			return;
////		}
////	}
////
////	cout << "��ȿ���� ���� ID �Դϴ�.." << endl;
////}
////
////void Account :: Withdraw()
////{
////	int money;
////	int id;
////
////	cout << "���� ID: ";		cin >> id;
////	cout << "��ݾ� : ";		cin >> money;
////
////	for (int i = 0; i < ::index; i++)
////	{
////		if (pArray2[i]->id == id)
////		{
////			if (pArray2[i]->balance < money)
////			{
////				cout << "�ܾ� ���� �Դϴ�.." << endl;
////				return;
////			}
////
////			pArray2[i]->balance -= money;
////			cout << "��� �Ϸ� !" << endl;
////			return;
////		}
////	}
////	cout << "��ȿ���� ���� ID�Դϴ�. " << endl;
////}
////
////void Account :: Inquire()
////{
////	for (int i = 0; i < ::index; i++)
////	{
////		cout << "���� ID : " << pArray2[i]->id << endl;
////		cout << "�� �� : " << pArray2[i]->name << endl;
////		cout << "�� �� : " << pArray2[i]->balance << endl;
////	}
////}
////
////
////int main(void)
////{
////	Account* pArray;
////	
////	int choice;
////
////	while (1)
////	{
////		PrintMenu();
////		cout << " ���� : "; cin >> choice;
////
////		switch (choice)
////		{
////		case MAKE:
////			pArray->MakeAccount();
////			break;
////
////		case DEPOSIT:
////			pArray->Deposit();
////			break;
////
////		case WITHDRAW:
////			pArray->Withdraw();
////			break;
////
////		case INQUIRE:
////			pArray->Inquire();
////			break;
////
////		case EXIT:
////			return 0;
////
////		default:
////			cout << "Illegal selection.. " << endl;
////			break;
////		}
////	}
////	return 0;
////}
//
//////ù��° �ߴ� ����� ������ ��Ʈ���ο��� ����ġ�� �ȿ� �Լ����� �ҷ��ö� �������� pArray2������ �迭�� �����Ͽ� 
//////�����ϴ¹���̶� pArray�� MakeAccount�� �θ��� �ִ� ����� ����.. �ذ���� �Լ����� �������� ������
//
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
//	cout << "���¹�ȣ: " << id << endl;
//	cout << "�̸� : " << name << endl;
//	cout << "�ܾ� : " << balance << endl;
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
//		cout << " ���� : "; cin >> choice;
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
//	cout << " 1. ���� ���� " << endl;
//	cout << " 2. �Ա� " << endl;
//	cout << " 3. ��� " << endl;
//	cout << " 4. �ܾ� ��ȸ " << endl;
//	cout << " 5. ���α׷� ���� " << endl;
//}
//
//void MakeAccount()
//{
//	int id;
//	char name [20]; //	�����ͷ� �ϸ� �ȵǰ�, ����� ũ�⸦ ����������Ѵ�.. 
//	int balance;
//
//	cout << endl;
//	cout << " ���� ���� -----" << endl;
//
//	cout << " ���� ID : ";	cin >> id;
//	cout << " �� �� : ";		cin >> name;
//	cout << " �Աݾ� : ";	cin >> balance;
//	cout << endl;
//	cout << "���»����Ϸ�!" << endl;
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
//	cout << " ���� ID : ";	cin >> id;
//	cout << " �Աݾ� : ";	cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray2[i]->GetId() == id)
//		{
//			pArray2[i]->DepositMoney(money);
//		}
//	}
//
//	cout << "��ȿ���� ���� ID �Դϴ�.." << endl;
//	cout << endl;
//}
//
//void Withdraw()
//{
//	int money;
//	int id;
//
//	cout << endl;
//	cout << "���� ID: ";		cin >> id;
//	cout << "��ݾ� : ";		cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray2[i]->GetId() == id)
//		{
//			if (pArray2[i]->GetBalance() < money)
//			{
//				cout << "�ܾ��� �����մϴ� .." << endl;
//				cout << endl;
//				return;
//			}
//
//			pArray2[i]->WithDrawMoney(money);
//		}
//	}
//
//	cout << "��ȿ���� ���� ID�Դϴ�. " << endl;
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
////	��ü�������� �ص� �������� ���α׷��� ȣ��ȴ�. 
