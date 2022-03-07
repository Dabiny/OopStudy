//#include <iostream>
//using namespace std;
//
//const int NAME_LEN = 20;
//
//typedef struct _Account
//{
//	int id;
//	int balance;
//	char name[NAME_LEN];
//} Account;
//
//Account pArray[100];
//int index = 0;
//
//void PrintMenu();
//void MakeAccount();
//void Deposit();
//void Withdraw();
//void Inquire();
//
//enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
//
//int main(void)
//{
//	int choice;
//
//	while (1)
//	{
//		PrintMenu();
//		cout << " ���� : "; cin >> choice;
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
//void MakeAccount() //���� ����
//{
//	int id;
//	char name[NAME_LEN];
//	int balance;
//
//	cout << " ���� ���� -----" << endl;
//
//	cout << " ���� ID : ";	cin >> id;
//	cout << " �� �� : ";		cin >> name;
//	cout << " �Աݾ� : ";	cin >> balance;
//
//	pArray[index].id = id;
//	strcpy(pArray[index].name, name);
//	pArray[index].balance = balance;
//
//	index++;
//}
//
//void Deposit()
//{
//	int money;
//	int id;
//
//	cout << " ���� ID : ";	cin >> id;
//	cout << " �Աݾ� : ";	cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray[i].id == id)
//		{
//			pArray[i].balance += money;
//			cout << "�Ա� �Ϸ� !" << endl;
//			return;
//		}
//	}
//	
//	cout << "��ȿ���� ���� ID �Դϴ�.." << endl;
//}
//
//void Withdraw()
//{
//	int money;
//	int id;
//
//	cout << "���� ID: ";		cin >> id;
//	cout << "��ݾ� : ";		cin >> money;
//
//	for (int i = 0; i < index; i++)
//	{
//		if (pArray[i].id == id)
//		{
//			if (pArray[i].balance < money)
//			{
//				cout << "�ܾ� ���� �Դϴ�.." << endl;
//				return;
//			}
//
//			pArray[i].balance -= money;
//			cout << "��� �Ϸ� !" << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID�Դϴ�. " << endl;
//}
//
//void Inquire()
//{
//	for (int i = 0; i < index; i++)
//	{
//		cout << "���� ID : " << pArray[i].id << endl;
//		cout << "�� �� : " << pArray[i].name << endl;
//		cout << "�� �� : " << pArray[i].balance << endl;
//	}
//}