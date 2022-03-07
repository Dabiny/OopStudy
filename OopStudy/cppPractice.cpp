//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;

/*����Ʈ ��*/

//int Adder(int num1 = 1, int num2 = 2);	//	����Ʈ���� ����
//// ����Ʈ���� �Ϻκи� �����Ҽ��� �ִ�. (int num1, int num2 = 2); �̷���
//// ��, �ݵ�� ������ �Ű��������� �־���Ѵ�. (int num1 = 1, int num2) (x)
//int main(void)
//{
//	cout << Adder() << endl;		// 3
//	cout << Adder(3) << endl;		// 5 
//	cout << Adder(3, 5) << endl;	// 8
//}
//
//int Adder(int num1, int num2)
//{
//	return num1 + num2;
//}

//////////////////////////////////////////////////////////////////////

/*�ζ��� �Լ�*/

//template <typename T>
//
//inline T SQUARE(T x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	cout << SQUARE(5.5) << endl;
//	cout << SQUARE(12) << endl;
//}

//////////////////////////////////////////////////////////////////////

/*namespace*/

//namespace A
//{
//	void SimpleFunc(void) //ö��
//	{
//		cout << "A������� ö��" << endl;
//	}
// // ���ӽ����̽� �����ȿ� �Լ� �������ְ� ���� ���ǵ� ���� !
// // ex > void SimpleFune(void); 
// //		void A :: SimpleFunc(void){...;}
//}
//
//namespace B
//{
//	void SimpleFunc(void) //ö��
//	{
//		cout << "B������� ö��" << endl;
//	}
//}
//
//int main(void)
//{
//	A::SimpleFunc();
//	B::SimpleFunc();
//}

// A���� ö��(�Լ�)�� �θ����� ���������� :: ���Ἥ �ҷ����� 

/*
	������������ �Ǵٸ� ��� 

	���������� ���������� �̸��� ������ 

	ex) int val = 100;

		int main()
		{
			int val = 20;
			val +=3;
			::val += 7; //������������
		}

	���������� ���������� �̸��� ������ ���������� �������ԵǴ� Ư¡�� �ִ�.
	���������� int main�� ���� �������� ::�� ����ϸ� �ȴ�.

*/

//namespace Parent
//{
//	int num = 2;
//
//	namespace SubOne
//	{
//		int num = 3;
//	}
//
//	namespace SubTwo
//	{
//		int num = 4;
//	}
//}
//
//int main()
//{
//	cout << Parent::num << endl;
//	cout << Parent::SubOne::num << endl;
//	cout << Parent::SubTwo::num << endl;
//
//}

//////////////////////////////////////////////////////////////////////////

/*������(reference)*/
/*
*  �����ڴ� �������� ���𰡴��ϸ� ������ ����.
*	�迭 ��ҵ� ������ ������.
*	������ ������ �����̱⶧���� ������ ����
*/

//int main()
//{
//	int arr[3] = { 1,3,5 };
//	
//	int& ref1 = arr[0];
//	int& ref2 = arr[1];
//	int& ref3 = arr[2];
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//
//}

//int main()
//{
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//
//}

/*call by reference*/

//void SwapByref(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
///*�����ڸ� �̿��� call by reference*/
//
//void SwapByref2(int& ref1, int& ref2)
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void)
//{
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByref(&val1, &val2);
//	SwapByref2(val1, val2);
//
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//}

//int& RefRetFuncOne(int& ref)
//{
//	ref++;
//	return ref;
//}
//
//int main(void)
//{
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//
//}

////////////////////////////////////////////////////////////

//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//Point& PntAdder(const Point& p1, const Point& p2)
//{
//	Point* pptr = new Point;
//
//	pptr->xpos = p1.xpos + p2.xpos;
//	pptr->ypos = p1.ypos + p2.ypos;
//
//	return *pptr;
//
//}
//
//int main()
//{
//	Point* ptr1 = new Point;
//	ptr1->xpos = 3;
//	ptr1->ypos = 4;
//
//	Point* ptr2 = new Point;
//	ptr2->xpos = 5;
//	ptr2->ypos = 5;
//
//	Point& ref = PntAdder(*ptr1, *ptr2);
//
//	cout << ref.xpos << endl;
//	cout << ref.ypos << endl;
//
//	delete ptr1;
//	delete ptr2;
//	delete &ref;
//
//}

/////////////////////////////////////////////////////////////

/*��� �̴ϼȶ�����*/

//class Point
//{
//private:
//	int x;
//	int y;
//
//public:
//	Point(const int& xpos, const int& ypos);
//	int GetX() const;
//	int GetY() const;
//
//	bool SetX(int xpos);
//	bool SetY(int ypos);
//};
//
//Point::Point(const int& xpos, const int& ypos)
//{
//	x = xpos;
//	y = ypos;
//}
//
////Point::~Point(){}
//
//int Point::GetX() const { return x; }
//int Point::GetY() const { return y; }
//
//bool Point::SetX(int xpos)
//{
//	if (0 > xpos || xpos > 100)
//	{
//		cout << "��� ������ ��" << endl;
//		return false;
//	}
//
//	x = xpos;
//
//	return  true;
//}
//
//bool Point::SetY(int ypos)
//{
//	if (0 > ypos || ypos > 100)
//	{
//		cout << "��� ������ ��" << endl;
//		return false;
//	}
//
//	y = ypos;
//	return true;
//}
//
//class Rectangle
//{
//private:
//
//	Point upLeft;
//	Point lowRight;
//
//public:
//
//	Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
//		: upLeft(x1,y1), lowRight(x2,y2) {} //�̺κ��� �̴ϼȶ����� 
//	//�����ڴ� ���簢���� �̷�� ������ ������ ���� ������ �� �ְ� �����Ͽ���.
//	// ':' �̺κ��� �̴ϼȶ������� 
//	// "��ü upLeft������������ x1,y1�� ���ڷ� ���޹޴� �����ڸ� ȣ����" ��¶�
//
//	void ShowInfo();
//};
//
//void Rectangle::ShowInfo()
//{
//	cout << "�� ���: " << '[' << upLeft.GetX() << ",";
//	cout << upLeft.GetY() << ']' << endl;
//
//	cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ",";
//	cout << lowRight.GetY() << ']' << endl;
//
//	//����Ʈ Ŭ���� upLeft���� getY()�� ���Ͽ� y���� �������� 
//}
//
//int main()
//{
//	Rectangle rec(1, 1, 5, 5);
//	rec.ShowInfo();
//}

/*��� �̴ϼȶ������� �̿��� ���� �� �ܽ�Ʈ ��� �ʱ�ȭ*/

//class FruitSeller
//{
//private:
//	const int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//
//public:
//	FruitSeller(int price, int num, int money)
//		: APPLE_PRICE(1000),numOfApples(num),myMoney(money){}
//
//	// APPLE_PRICE �ܽ�Ʈ����� �����ڸ� ���ؼ� 1000������ �ʱ�ȭ �ϰ��ִ�.
//
//	int SaleApples(int money)
//	{
//		int num = money / APPLE_PRICE;
//
//		if (money < APPLE_PRICE)
//		{
//			cout << " �ݾ��� ������ " << endl;
//		}
//
//		myMoney += money;
//		numOfApples -= num;
//
//		return num;
//	}
//	// ... ����
//};

///*������ �̴ϼȶ�����*/
//
//class AAA
//{
//public:
//	AAA() { cout << "Empty obj" << endl; }
//	void ShowYourNmae() { cout << "I'm class AAA" << endl; }
//};
//
//class BBB
//{
//private:
//	AAA& ref; //������ ���� , �����ڴ� ����� ���ÿ� �ʱ�ȭ ���־���ϱ⿡ �����ڿ��� �ʱ�ȭ
//	const int& num;
//
//public:
//	BBB(AAA &r, const int &n) : ref(r), num(n){}
//	// ������ ref (r) �� �ʱ�ȭ, �ܽ�Ʈ ������ num (n)���� �ʱ�ȭ ����
//
//	void ShowInfo()
//	{
//		ref.ShowYourNmae(); //���⿡ AAA ref�������� �Լ��� ������ ������ ȣ��� �� ȣ���
//		cout << num << endl;
//	}
//};
//
//int main()
//{
//	AAA obj1;
//	BBB obj2(obj1, 20);
//
//	obj2.ShowInfo();
//}

/*private ������*/

//class AAA
//{
//private:
//	int num;
//
//public:
//	AAA() : num(0) {}
//
//	AAA& CreateInitObj(int n) const
//	{
//		AAA* ptr = new AAA(n);
//		return *ptr;
//	}
//
//	void ShowNum() const { cout << num << endl; }
//
//private:
//	AAA(int n) : num(n) {} 
//	// private �����ڸ� ����Ͽ� AAAŬ���� ���ο��ִ� �Լ��� AAA��ü�� ���������ϴ� ��������
//	// �� �����ڰ� ȣ��Ǵµ� �ܺΰ� �ƴ� Ŭ���� ���ο��� private���� �����ڸ� ȣ����� �ʱ�ȭ �Ѵ�.
//	
//};
//
//int main()
//{
//	AAA base;
//	base.ShowNum();
//
//	AAA& obj1 = base.CreateInitObj(3);
//	obj1.ShowNum();
//
//	AAA& obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	base.ShowNum();
//
//	delete& obj1;
//	delete& obj2; //�������� ��ü�� ���������� ������ ���־���� ! 
//
//}

/*�Ҹ���*/

//class Person
//{
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* _name, int _age)
//		
//	{
//		int len = strlen(_name) + 1; //���ڿ��� ���̸� ���ϴ� Ű���� strlen(�����̸�) + 1 (�ι���);
//		name = new char[len]; //���̸� int������ ��ȯ�� len�� �迭�� ���� (�̸�ũ�⸸ŭ�����Ҵ�)
//
//		strcpy(name, _name);
//		age = _age;
//	}
//
//	void ShowInfo() const
//	{
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//	}
//
//	~Person() { delete[]name; cout << "�Ҹ��� ȣ��!" << endl; }
//
//};
//
//int main()
//{
//	Person p1("Lee Dong Woo", 29);
//	Person p2("Kim Dabin", 29);
//
//	p1.ShowInfo();
//	p2.ShowInfo();
//}

/*��������*/

//namespace COMP_POS
//{
//	enum { CLERK, SENIOR, ASSIST, MANAGER };
//
//	void ShowPositionInfo(int pos)
//	{
//		switch (pos)
//		{
//
//		case CLERK:
//			cout << "���" << endl;
//			break;
//
//		case SENIOR:
//			cout << "����" << endl;
//			break;
//
//		case ASSIST:
//			cout << "�븮" << endl;
//			break;
//
//		case MANAGER:
//			cout << "����" << endl;
//			break;
//
//		}
//	}
//}
//
//class NameCard
//{
//	char* name;
//	char* company;
//	char* callNumber;
//
//	int pos;
//
//public:
//	NameCard(const char* _name, const char* _company, const char* _callNumber, int _pos)
//		: pos(_pos)
//	{
//		int len1 = strlen(_name) + 1;
//		int len2 = strlen(_company) + 1;
//		int len3 = strlen(_callNumber) + 1;
//
//		name = new char[len1];
//		company = new char[len2];
//		callNumber = new char[len3];
//
//		strcpy(name, _name);
//		strcpy(company, _company);
//		strcpy(callNumber, _callNumber);
//		
//	}
//
//	~NameCard()
//	{
//		delete[]name;
//		delete[]company;
//		delete[]callNumber;
//	}
//
//	void ShowInfo()
//	{
//		cout << "�̸� : " << name << endl;
//		cout << "ȸ�� : " << company << endl;
//		cout << "��ȭ��ȣ: " << callNumber << endl;
//		cout << "����: "; COMP_POS::ShowPositionInfo(pos); //���������� �̷��� 
//		cout << endl;
//	}
//
//};
//int main()
//{
//	NameCard manClerk("Lee", "ABCEng", "010-111-222", COMP_POS::CLERK);
//
//	manClerk.ShowInfo();
//}

/* Ŭ������ü �迭*/

//class Person
//{
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* _name, int _age)
//		:age(_age)
//	{
//		int len = strlen(_name) + 1;
//		name = new char[len];
//		strcpy(name, _name);
//	}
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "������ ȣ��" << endl;
//	}
//
//	void SetPersonInfo(char* _name, int _age)
//	{
//		name = _name;
//		age = _age;
//	}
//	
//	void ShowPersonInfo()
//	{
//		cout << name << endl;
//		cout << age << endl;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		cout << "�Ҹ��� ȣ��" << endl;
//	}
//};
//
//int main()
//{
//	Person parr[3];
//	char namestr[100];
//	char* strptr;
//	int age;
//	int len;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸�: ";
//		cin >> namestr;
//
//		cout << "����: ";
//		cin >> age;
//
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//
//}

///*������ ��ü �迭*/

//// ��ü�� �ּҰ��� ������ ������ ������ ������ �̷��� �迭��
//class Person
//{
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* _name, int _age)
//		:age(_age)
//	{
//		int len = strlen(_name) + 1;
//		name = new char[len];
//		strcpy(name, _name);
//	}
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "������ ȣ��" << endl;
//	}
//
//	void SetPersonInfo(char* _name, int _age)
//	{
//		name = _name;
//		age = _age;
//	}
//
//	void ShowPersonInfo()
//	{
//		cout << name << endl;
//		cout << age << endl;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		cout << "�Ҹ��� ȣ��" << endl;
//	}
//};
//
//int main()
//{
//	Person* parr[3];
//	char namestr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸�: ";
//		cin >> namestr;
//		
//		cout << "���� : ";
//		cin >> age;
//
//		parr[i] = new Person(namestr, age);
//		//�����͹迭�� ������ü ������ �ξ� �����ϰ� ����
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//
//}
//
///* 
//	��ü�� ������ ���� �ΰ�������� �ϳ��� ���ؾ���
//	������ ����� ��ü�� �ϴ���, ��ü�� �ּҰ����� �ϴ��ĸ� �����ؾ���.
//*/

/*this ������*/

//class SoSimple
//{
//private:
//	int num;
//
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "num = " << num << ",";
//		cout << "address = " << this << endl;
//	}
//
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//
//	SoSimple* GetTisPointer()
//	{
//		return this; //�� ������ �����ϴ� ��ü�� �����͸� ��ȯ�϶�� �ǹ�
//	}
//
//};
//
//int main()
//{
//	SoSimple sim1(100);
//	SoSimple* ptr1 = sim1.GetTisPointer();
//	cout << ptr1 << ",";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple* ptr2 = sim2.GetTisPointer();
//	cout << ptr2 << ",";
//	ptr2->ShowSimpleData();
//}
// 
////////////////////////////////////////////////////////////////////////////////////
// 
//class ThisClass
//{
//private:
//	int num;
//
//public:
//	void ThisFunc(int num)
//	{
//		this->num = 207;
//		num = 105;
//	}
//};

/*
	�� Ŭ������ thisFunc�Լ��� �Ű����� �̸��� num .
	�⺯�� �̸��� �����ϱ� ������ ���� ���� ��ħ.. ������ this�����͸� ����ؼ� ����������
	this->num ( �� num �� ��������� num�� ) 
*/

/*���� ���۷���: ��ü �ڽ��� ������ �� �ִ� ������*/
//
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "��ü ����" << endl;
//	}
//
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//
//int main()
//{
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//
//}