//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;

/*객체 포인터 변수*/

// c++에서 , AAA형 포인터 변수는 AAA객체 or AAA를 직접 혹은 간접적으로 상혹사는 모든 객체를 가리킬 수 있음.
// (객체의 주소값을 저장 할 수 있음)

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
//	Person* ptr1 = new Student(); //간접적으로 상속중이라 가능!
//	Person* ptr2 = new PartTimeStudent();
//	Student* ptr3 = new PartTimeStudent();
//
//	ptr1->Sleep();
//	ptr2->Sleep();
//	ptr3->Study();
//} 

// 다음의 특성은 상속의 IS-A관계를 통해서 논리적으로 이해가 가능함

/*함수 오버라이딩*/

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
//	virtual void ShowSalaryInfo() const = 0; //추상클래스 설정함. employee객체를 만들어버리는 실수를 막기위해!
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
//	void ShowAllSalaryInfo() const //오류부분
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
//		for (int i = 0; i < empNum; i++) //오류부분
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
//	TemporaryWorker(const char* name, int pay) //이름(임플로이)이랑 페이 초기화 받는중 
//		: Employee(name), workTime(0), payPerHour(pay)
//		//employee의 name 초기화, workTime ->0초기화, 시간당페이(pay)로 초기화
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
//	virtual int GetPay() const //버추얼선언
//	{
//		return PermanentWorker::GetPay() // permenantworker의 getpay함수 호출
//			+ (int)(salesResult * bonusRatio);
//	}
//
//	virtual void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl; //salesWorker getpay함수가 호출됨
//	}
//	// 왜 Permenent 클래스의showSalartInfo와 sales의 showSalryInfo 함수는 내용이같은데 다시 정의를 해주었을까?
//	// 함수 내용이 같더라도 오버라이딩 (GetPay()) 함수 때문에 호출이 달라져 별도로 정의해줘야 각 알맞는 함수들이 호출됨! 
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

//permenantworker 클레스에도 똑같은 GetPay함수와 ShowSalaryInfo함수가 있는데, 자식클래스인 saleWorker클레스에서도
//동일한 이름과 혐태로 두 함수를 정으ㅣ함.  -> 오버라이딩 

// 이렇게 오버라이딩이 되면 오버라이딩된 부모 클래스 함수는 오버라이딩을 한 자식 클래스의 함수에 가려지게 됨.
// salesworker 클래스 내에서 GetPay호출하면 Salesworker클래스의 함수가 호출함.

//class First
//{
//public:
//	virtual void MyFunc() { cout << "FirstFunc" << endl; } //버추얼 선언
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