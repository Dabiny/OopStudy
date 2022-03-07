//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;


/*상속*/

//class PermanentWorker
//{
//private:
//	char name[100];
//	int salary;
//
//public:
//	PermanentWorker(const char* name, int money) : salary(money)
//	{
//		strcpy(this->name, name);
//	}
//
//	int GetPay() const
//	{
//		return salary;
//	}
//
//	void ShowSalaryInfo() const
//	{
//		cout << "name: " << name << endl;
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler
//{
//private:
//	PermanentWorker* empList[50];
//	int empNum;
//
//public:
//	EmployeeHandler() : empNum(0) {}
//	
//	void AddEmployee(PermanentWorker* emp)
//	{
//		empList[empNum++] = emp;
//	}
//
//	void ShowTotalSalary() const
//	{
//		int sum = 0;
//		for (int i = 0; i < empNum; i++)
//		{
//			sum += empList[i]->GetPay();
//		}
//	}
//
//	void ShowAllSalaryInfo() const
//	{
//		for (int i = 0; i < empNum; i++)
//		{
//			empList[i]->ShowSalaryInfo();
//		}
//	}
//
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//		{
//			delete empList[i];
//		}
//	}
//};
//
//int main()
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("Kim", 1000));
//	handler.AddEmployee(new PermanentWorker("Lee", 2000));
//	handler.AddEmployee(new PermanentWorker("KY", 3000));
//
//	handler.ShowAllSalaryInfo();
//}

/*유도(자식) 클래스의 객체 생성과정*/

//class SoBase
//{
//private:
//	int baseNum;
//
//public:
//	SoBase() :baseNum(20) { cout << "SoBase()" << endl; }
//	SoBase(int n) :baseNum(n) { cout << "SoBase(int n)" << endl; }
//	
//	void ShowBaseData()
//	{
//		cout << baseNum << endl;
//	}
//
//};
//
//class SoDerived : public SoBase
//{
//private:
//	int derivNum;
//
//public:
//	SoDerived() : derivNum(30) { cout << "SoDerived()" << endl; }
//	SoDerived(int n) : derivNum(n) { cout << "SoDerived(int n)" << endl; }
//	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) { cout << "SoDerived(int n1, int n2)" << endl; }
//
//	void ShowDerivData()
//	{
//		ShowBaseData();
//		cout << derivNum << endl;
//	}
//};
//
//int main()
//{
//	cout << " case1..." << endl;
//	SoDerived dr1;
//	cout << endl;
//
//	cout << "case2..." << endl;
//	SoDerived dr2(12);
//	cout << endl;
//
//	cout << "case3..." << endl;
//	SoDerived dr3(12, 24);
//	cout << endl;
//
//	dr3.ShowDerivData();
//	dr1.ShowBaseData();
//}

//class Computer
//{
//private:
//	char owner[50];
//
//public:
//	Computer(const char* name)
//	{
//		strcpy(owner, name);
//	}
//
//	void Calculate()
//	{
//		cout << "요청 내용을 계산합니다." << endl;
//	}
//}; //컴터의 본래 기능 (계산)
//
//class NotebookComp : public Computer
//{
//private:
//	int Battery;
//
//public:
//	NotebookComp(const char* name, int initChag)
//		: Computer(name), Battery(initChag)
//	{}
//
//	void Charging() { Battery += 5; }
//	void UseBattery() { Battery -= 1; }
//	void MovingCal()
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필요합니다" << endl;
//			return;
//		}
//
//		cout << "이동하면서 ";
//		Calculate();
//		UseBattery();
//	}
//	
//	int GetBatteryInfo()
//	{
//		return Battery;
//	}
//}; //노트북 컴터의 본래 기능 (계산 + 배터리 + 충전)
//
//class TabletNotebook : public NotebookComp
//{
//private:
//	char regstPenModel[50];
//
//public:
//	TabletNotebook(const char* name, int initChag, const char* pen)
//		: NotebookComp(name, initChag)
//	{
//		strcpy(regstPenModel, pen);
//	}
//
//	void Write(const char* penInfo)
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필요합니다" << endl;
//			return;
//		}
//
//		if (strcmp(regstPenModel, penInfo) != 0)
//		{
//			cout << "등록된 펜이 아닙니다";
//			return;
//		}
//
//		cout << "필기 내용을 처리합니다." << endl;
//		UseBattery();
//	}
//}; //타블렛 노트북 본래기능 ( 위 클래스기능 + 펜추가 )
//
//int main()
//{
//	NotebookComp nc("이수종", 5);
//	TabletNotebook tn("정수영", 5, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//
//	return 0;
//}

/*HAS-A관계*/

//class Gun
//{
//private:
//	int bullet;
//
//public:
//	Gun(int bnum):bullet(bnum) {}
//
//	void Shot()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//
//};
//
//class Police : public Gun
//{
//
//private:
//	int handcuffs;
//
//public:
//	Police(int bnum, int bcuff):Gun(bnum), handcuffs(bcuff){}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//
//};
//
//int main()
//{
//
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//
//}
//
///*HAS-A관계2*/
//
//class Gun
//{
//
//private:
//	int bullet;
//
//public:
//	Gun(int bnum) :bullet(bnum) {}
//
//	void Shot()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//
//};
//
//class Police 
//{
//private:
//	int handcuffs;
//	Gun* pistol;
//
//public:
//
//	Police(int bnum, int bcuff) : handcuffs(bcuff)
//	{
//		if (bnum > 0)
//		{
//			pistol = new Gun(bnum);
//		}
//		else
//		{
//			pistol = NULL;
//		}
//	}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//
//	void Shot()
//	{
//		if (pistol == NULL)
//		{
//			cout << "Hut BBANG!" << endl;
//		}
//		else
//		{
//			pistol->Shot();
//		}
//	}
//
//};
//
//int main()
//{
//	Police pman(5, 3);
//	Police pman2(0, 3);
//	pman.PutHandcuff();
//}