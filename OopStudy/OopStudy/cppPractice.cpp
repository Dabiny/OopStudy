//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;

/*디폴트 값*/

//int Adder(int num1 = 1, int num2 = 2);	//	디폴트값의 선언
//// 디폴트값은 일부분만 설정할수도 있다. (int num1, int num2 = 2); 이렇게
//// 단, 반드시 오른쪽 매개변수부터 넣어야한다. (int num1 = 1, int num2) (x)
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

/*인라인 함수*/

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
//	void SimpleFunc(void) //철수
//	{
//		cout << "A동에사는 철수" << endl;
//	}
// // 네임스페이스 공간안에 함수 선언해주고 따로 정의도 가능 !
// // ex > void SimpleFune(void); 
// //		void A :: SimpleFunc(void){...;}
//}
//
//namespace B
//{
//	void SimpleFunc(void) //철수
//	{
//		cout << "B동에사는 철수" << endl;
//	}
//}
//
//int main(void)
//{
//	A::SimpleFunc();
//	B::SimpleFunc();
//}

// A동의 철수(함수)를 부르려면 범위연산자 :: 를써서 불러야함 

/*
	범위연산자의 또다른 기능 

	전역변수와 지역변수의 이름이 같을때 

	ex) int val = 100;

		int main()
		{
			int val = 20;
			val +=3;
			::val += 7; //전역변수접근
		}

	전역변수는 지역변수와 이름이 같을때 지역변수에 가려지게되는 특징이 있다.
	전역변수를 int main에 쓰고 싶을때는 ::를 사용하면 된다.

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

/*참조자(reference)*/
/*
*  참조자는 변수에만 선언가능하며 제한은 없다.
*	배열 요소도 변수로 간주함.
*	포인터 변수도 변수이기때문에 참조자 가능
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
///*참조자를 이용한 call by reference*/
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

/*멤버 이니셜라이저*/

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
//		cout << "벗어난 범위의 값" << endl;
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
//		cout << "벗어난 범위의 값" << endl;
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
//		: upLeft(x1,y1), lowRight(x2,y2) {} //이부분이 이니셜라이저 
//	//생성자는 직사각형을 이루는 두점의 정보를 직접 전달할 수 있게 정의하였다.
//	// ':' 이부분이 이니셜라이져임 
//	// "객체 upLeft생성과정에서 x1,y1를 인자로 전달받는 생성자를 호출해" 라는뜻
//
//	void ShowInfo();
//};
//
//void Rectangle::ShowInfo()
//{
//	cout << "좌 상단: " << '[' << upLeft.GetX() << ",";
//	cout << upLeft.GetY() << ']' << endl;
//
//	cout << "우 하단: " << '[' << lowRight.GetX() << ",";
//	cout << lowRight.GetY() << ']' << endl;
//
//	//포인트 클래스 upLeft안의 getY()를 통하여 y값을 가져오기 
//}
//
//int main()
//{
//	Rectangle rec(1, 1, 5, 5);
//	rec.ShowInfo();
//}

/*멤버 이니셜라이저를 이용한 변수 및 콘스트 상수 초기화*/

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
//	// APPLE_PRICE 콘스트상수를 생성자를 통해서 1000원으로 초기화 하고있다.
//
//	int SaleApples(int money)
//	{
//		int num = money / APPLE_PRICE;
//
//		if (money < APPLE_PRICE)
//		{
//			cout << " 금액이 부족해 " << endl;
//		}
//
//		myMoney += money;
//		numOfApples -= num;
//
//		return num;
//	}
//	// ... 생략
//};

///*참조자 이니셜라이저*/
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
//	AAA& ref; //참조자 선언 , 참조자는 선언과 동시에 초기화 해주어야하기에 생성자에서 초기화
//	const int& num;
//
//public:
//	BBB(AAA &r, const int &n) : ref(r), num(n){}
//	// 참조자 ref (r) 로 초기화, 콘스트 참조자 num (n)으로 초기화 해줌
//
//	void ShowInfo()
//	{
//		ref.ShowYourNmae(); //여기에 AAA ref참조자의 함수를 넣으면 쇼인포 호출시 다 호출됨
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

/*private 생성자*/

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
//	// private 생성자를 사용하여 AAA클래스 내부에있는 함수에 AAA객체를 동적생성하는 문구에서
//	// 또 생성자가 호출되는데 외부가 아닌 클래스 내부여서 private에서 생성자를 호출시켜 초기화 한다.
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
//	delete& obj2; //동적으로 객체를 생성했으니 삭제도 해주어야함 ! 
//
//}

/*소멸자*/

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
//		int len = strlen(_name) + 1; //문자열의 길이를 구하는 키워드 strlen(인자이름) + 1 (널문자);
//		name = new char[len]; //길이를 int형으로 변환한 len을 배열에 대입 (이름크기만큼동적할당)
//
//		strcpy(name, _name);
//		age = _age;
//	}
//
//	void ShowInfo() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	~Person() { delete[]name; cout << "소멸자 호출!" << endl; }
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

/*연습문제*/

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
//			cout << "사원" << endl;
//			break;
//
//		case SENIOR:
//			cout << "주임" << endl;
//			break;
//
//		case ASSIST:
//			cout << "대리" << endl;
//			break;
//
//		case MANAGER:
//			cout << "과장" << endl;
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
//		cout << "이름 : " << name << endl;
//		cout << "회사 : " << company << endl;
//		cout << "전화번호: " << callNumber << endl;
//		cout << "직급: "; COMP_POS::ShowPositionInfo(pos); //열거형쓸때 이렇게 
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

/* 클래스객체 배열*/

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
//		cout << "생성자 호출" << endl;
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
//		cout << "소멸자 호출" << endl;
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
//		cout << "이름: ";
//		cin >> namestr;
//
//		cout << "나이: ";
//		cin >> age;
//
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//
//}

///*포인터 객체 배열*/

//// 객체의 주소값이 저장이 가능한 포인터 변수로 이뤄진 배열들
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
//		cout << "생성자 호출" << endl;
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
//		cout << "소멸자 호출" << endl;
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
//		cout << "이름: ";
//		cin >> namestr;
//		
//		cout << "나이 : ";
//		cin >> age;
//
//		parr[i] = new Person(namestr, age);
//		//포인터배열로 동적객체 생성이 훨씬 간단하고 편함
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
//	객체를 저장할 때는 두가지방법중 하나를 택해야함
//	저장의 대상을 객체로 하느냐, 객체의 주소값으로 하느냐를 결정해야함.
//*/

/*this 포인터*/

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
//		return this; //이 문장을 실행하는 객체의 포인터를 반환하라는 의미
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
	위 클래스의 thisFunc함수의 매개변수 이름은 num .
	멤변의 이름과 동일하기 때문에 둘이 서로 겹침.. 하지만 this포인터를 사용해서 구별시켜줌
	this->num ( 이 num 은 멤버변수의 num임 ) 
*/

/*셀프 레퍼런스: 객체 자신을 참조할 수 있는 참조자*/
//
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "객체 생성" << endl;
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