//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;

/*��ü ������ ����*/

// c++���� , AAA�� ������ ������ AAA��ü or AAA�� ���� Ȥ�� ���������� ��Ȥ��� ��� ��ü�� ����ų �� ����.
// (��ü�� �ּҰ��� ���� �� �� ����)

//class Person
//{
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//
//class Student :public Person
//{
//public:
//	void Study() { cout << "Study" << endl; }
//};
//
//class PartTimeStudent : public Student
//{
//public:
//	void Work() { cout << "Work" << endl; }
//};
//
//int main()
//{
//	Person* ptr1 = new Student(); //���������� ������̶� ����!
//	Person* ptr2 = new PartTimeStudent();
//	Student* ptr3 = new PartTimeStudent();
//
//	ptr1->Sleep();
//	ptr2->Sleep();
//	ptr3->Study();
//} 

// ������ Ư���� ����� IS-A���踦 ���ؼ� �������� ���ذ� ������

/*�Լ� �������̵�*/

//class Employee
//{
//private:
//	char name[100];
//
//public:
//	Employee(const char* name)
//	{
//		strcpy(this->name, name);
//	}
//
//	void ShowYourName() const
//	{
//		cout << "name: " << name << endl;
//	}
//
//	virtual int GetPay() const = 0;
//	
//
//	virtual void ShowSalaryInfo() const = 0; //�߻�Ŭ���� ������. employee��ü�� ���������� �Ǽ��� ��������!
//	
//
//};
//
//class PermanentWorker :public Employee
//{
//private:
//	int salary;
//
//public:
//	PermanentWorker(const char* name, int money)
//		: Employee(name), salary(money) {}
//
//	int GetPay() const
//	{
//		return salary;
//	}
//
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler
//{
//private:
//	Employee* empList[50];
//	int empNum;
//
//public:
//	EmployeeHandler() : empNum(0) {}
//
//	void AddEmployee(Employee* emp)
//	{
//		empList[empNum++] = emp;
//	}
//
//	void ShowAllSalaryInfo() const //�����κ�
//	{
//		for (int i = 0; i < empNum; i++)
//		{
//			empList[i]-> ShowSalaryInfo();
//		}
//	}
//
//	void ShowTotalSalary() const
//	{
//		int sum = 0;
//
//		for (int i = 0; i < empNum; i++) //�����κ�
//		{
//			sum += empList[i]-> GetPay();
//		}
//
//		cout << "salary all: " << sum << endl;
//	}
//
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//		{
//			delete empList[i];
//		}
//	}
//
//};
//
//class TemporaryWorker : public Employee
//{
//private:
//	int workTime;
//	int payPerHour;
//
//public:
//	TemporaryWorker(const char* name, int pay) //�̸�(���÷���)�̶� ���� �ʱ�ȭ �޴��� 
//		: Employee(name), workTime(0), payPerHour(pay)
//		//employee�� name �ʱ�ȭ, workTime ->0�ʱ�ȭ, �ð�������(pay)�� �ʱ�ȭ
//	{}
//
//	void AddWorkTime(int time)
//	{
//		workTime += time;
//	}
//
//	virtual int GetPay() const
//	{
//		return workTime * payPerHour;
//	}
//
//	virtual void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class SalesWorker : public PermanentWorker
//{
//private:
//	int salesResult;
//	double bonusRatio;
//
//public:
//	SalesWorker(const char* name, int money, double ratio)
//		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
//
//	void AddSalesResult(int value)
//	{
//		salesResult += value;
//	}
//
//	virtual int GetPay() const //���߾󼱾�
//	{
//		return PermanentWorker::GetPay() // permenantworker�� getpay�Լ� ȣ��
//			+ (int)(salesResult * bonusRatio);
//	}
//
//	virtual void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl; //salesWorker getpay�Լ��� ȣ���
//	}
//	// �� Permenent Ŭ������showSalartInfo�� sales�� showSalryInfo �Լ��� �����̰����� �ٽ� ���Ǹ� ���־�����?
//	// �Լ� ������ ������ �������̵� (GetPay()) �Լ� ������ ȣ���� �޶��� ������ ��������� �� �˸´� �Լ����� ȣ���! 
//
//};
//
//int main()
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("KIM", 2000));
//	handler.AddEmployee(new PermanentWorker("Lee", 4000));
//	
//	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
//	alba->AddWorkTime(5);
//	handler.AddEmployee(alba);
//
//	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1f);
//	seller->AddSalesResult(7000);
//	handler.AddEmployee(seller);
//
//	handler.ShowAllSalaryInfo();
//	handler.ShowTotalSalary();
//}

//permenantworker Ŭ�������� �Ȱ��� GetPay�Լ��� ShowSalaryInfo�Լ��� �ִµ�, �ڽ�Ŭ������ saleWorkerŬ����������
//������ �̸��� ���·� �� �Լ��� ��������.  -> �������̵� 

// �̷��� �������̵��� �Ǹ� �������̵��� �θ� Ŭ���� �Լ��� �������̵��� �� �ڽ� Ŭ������ �Լ��� �������� ��.
// salesworker Ŭ���� ������ GetPayȣ���ϸ� SalesworkerŬ������ �Լ��� ȣ����.

//class First
//{
//public:
//	virtual void MyFunc() { cout << "FirstFunc" << endl; } //���߾� ����
//};
//
//class Second : public First
//{
//public:
//	void MyFunc() { cout << "SecondFunc" << endl; }
//};
//
//class Third : public Second
//{
//public:
//	void MyFunc() { cout << "ThirdFunc" << endl; }
//};
//
//int main()
//{
//
//	Third* tptr = new Third();
//	Second* sptr = tptr;
//	First* fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//
//}