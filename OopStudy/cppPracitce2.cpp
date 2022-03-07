//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;

/*복사 생성자*/

//class SoSimple
//{
//private:
//	int num1;
//	int num2;
//
//public:
//	SoSimple(int n1, int n2) : num1(n1), num2(n2)
//	{}
//
//	SoSimple(SoSimple& copy) //복사 생성자
//		: num1(copy.num1), num2(copy.num2)
//	{
//		cout << "두번째 생성자 호출" << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num1 << endl;
//		cout << num2 << endl;
//	}
//};
//
//int main()
//{
//	SoSimple sim1(15, 20);
//	cout << "생성 및 초기화 직전" << endl;
//	SoSimple sim2 = sim1; //?? 어떠한 형태의 대입연산이 될까 SoSimple sim2(sim1)으로 변환
//	cout << "생성 및 초기화 직후" << endl;
//	sim2.ShowSimpleData();
//}

// sim2 = sim1 -> 멤버 대 멤버 복사가 일어남 
// sim2 = sim1 == sim2(sim1)

/*
	복사생성자는 일반 생성자와 호출되는 시점이 다르다 . 이 복사생성자의 호출시점을 확실히 이해해야한다.

	복생을 예쁘게 쓰려면 밑처럼 쓰면됨! const를 사용해서 복사할때 실수를 방지
	
	복생을 따로 정의하지않고 멤버대멤버 복사를 진행하면 디폴트 복생이 자동으로 생성됨.
*/

//SoSimple(const Sosimple& copy)
//	: num1(copy.num1), num2(copy.num2)
//{
//	//생략
//}


/*묵시적변환이 싫을경우 발생을 원하지 않을경우*/

/*
	SoSimple sim2 = sim1; 을 c++에선 자동으로 sim2(sim1)으로 형변환을 해버린다.
	자동으로 묵시적변환을 해제하고 싶을 경우에는 묵시적변환을 차단해버리면 된다.

	생성자 위치에 explicit을 넣어버리면 끝! 코드의 명확성을 더해주기위해 사용된다.
	더이상 SoSimple sim2 = sim1; 이렇게 하면 초기화가 되지 않고 오로지 ()로 써줘야 초기화가 가능해진다.
*/

//explicit Sosimple(const Sosimple& copy)
//	: num1(copy.num1), num2(copy.num2)
//{
//	//생략
//}

/*얕은복사 깊은복사*/

//class Person
//{
//
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* _name, int _age)
//		: age(_age)
//	{
//		name = new char[strlen(_name) + 1];
//		strcpy(name, _name);
//	}
//
//	//깊은복사
//
//	Person(const Person& copy) : age(_age)
//	{
//		name = new char[strlen(copy.name) + 1];
//		strcpy(name, copy.name);
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
//
//};
//
//int main()
//{
//	Person man1("lee", 29);
//	Person man2 = man1; //디폴트 생성자에 의한 얕은 복사
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//}

// 디폴트 생성자는 단순 값복사만 해주기 때문에 멤변이 포인터인경우 포인터가 가리키는 주소값을 복사된 포인터도
// 똑같은 주소값을 가리킨다. 하지만 포인터 name은 생성자에서 동적할당을 해주고 있기 때문에 메모리를 해제 시켜줘야한다.
// 하지만 스텍메모리 공간구조상 먼저 man2가 소멸된다. ..책참조

//깊은복사는 이러한 포인터로 참조하는 대상까지 깊게 복사한다는 뜻으로 깊은복사라고 한다. 

//그럼 언제 복생이 호출되어야 할까? 
// 1. 기존에 생성된 객체를 이용해서 새로운 객체를 초기화 하는경우 person man2 = man1;
// 2. call -by - value 방식의 함수 호출과정에서 객체를 인자로 전달하는경우 func(man2);
// 3. 객체를 반환하되, 참조형으로 반환하지 않은경우 person func(); 

// 복생 호출 공통점: 객체를 모두 새로 생성해야한다. 생성과 동시에 동일한 자료형의 객체로 초기화 해야한다.

//int SimpleFunc(int n)
//{
//	return n;
//}
//
//int main()
//{
//	int num = 10;
//	cout << SimpleFunc(num) << endl;
//}

/*복생호출자 주체가 누구인가?*/
// case2 유형
// 
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n){}
//
//	SoSimple(const SoSimple& copy) :num(copy.num) //4. obj1이 인자에 들어가면서 obj1값이 복사됨 
//	{
//		cout << "생성자 호출(SoSimple& copy)" << endl; //5. 이 복생호출은 obj거임 
//	}
//
//	void ShowData()
//	{
//		cout << "num: " << num << endl;
//	}
//
//};
//
//void SimpleFuncObj(SoSimple obj) //3. 인자안에 클래스형 obj생성하면서 인자에 obj1를 담기위해(복사하기위해) obj복생 호출
//{
//	obj.ShowData();
//}
//
//int main()
//{
//	SoSimple obj1(7); //1. obj1객체 생성 
//	cout << "함수 호출 전" << endl;
//	SimpleFuncObj(obj1); //2. 함수 호출 (인자 obj1전달)
//	cout << "함수 호출 후" << endl;
//}

//복생 초기화의 대상은 obj1이 아니고 obj안에서 진행된다.

//case3유형

//class SoSimple
//{
//private:
//	int num;
//	
//public:
//	SoSimple(int n):num(n){}
//
//	SoSimple(const SoSimple& copy) : num(copy.num)
//	{
//		cout << "복생 호출 (&copy)" << endl;
//	}
//
//	SoSimple& Addnum(int n)
//	{
//		num += n;
//		return *this; 
//	}
//	
//	void ShowData()
//	{
//		cout << "num: " << num << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "return 이전" << endl;
//	return ob;
//}
//
//int main()
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj).Addnum(30).ShowData();
//	obj.ShowData();
//}

/*반환할때 만들어진 임시객체는 언제 사라질까?*/

//class Temporary
//{
//private:
//	int num;
//
//public:
//	Temporary(int n) : num(n) { cout << "create obj: " << num << endl; }
//	
//	~Temporary() { cout << "destory obj: " << num << endl; }
//
//	void ShowInfo()
//	{
//		cout << "내 멤변은 .." << num << endl;
//	}
//};
//
//int main()
//{
//	Temporary(100); //임시객체 생성
//	cout << "******* after make!" << endl << endl;
//
//	Temporary(200).ShowInfo();//임시객체 생성2
//	cout << "********* after make!" << endl << endl;
//
//	const Temporary& ref = Temporary(300); //임시객체 생성3
//	cout << "********** end of main!" << endl << endl;
//}

// 임시객체는 다음 행으로 넘어가면 소멸되어버린다. 
// 참조자에 참조되는 임시객체는 바로 소멸되지 않는다. 즉 다음행에서도 접근 가능하다. 

/*주소값으로 알아보는 호출시기*/
//class SoSimple
//{
//private:
//	int num;
//
//public:
//	SoSimple(int n) :num(n)
//	{
//		cout << "New Obj: " << this << endl;
//	}
//
//	SoSimple(const SoSimple& copy) : num(copy.num)
//	{
//		cout << "Ney Copy obj: " << this << endl;
//	}
//
//	~SoSimple() { cout << "Destroy obj: " << this << endl; }
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "Parm ADR: " << &ob << endl;
//	return ob;
//}
//
//int main()
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj);
//
//	cout << endl;
//	SoSimple tempRef = SimpleFuncObj(obj);
//	cout << "Return obj" << &tempRef << endl;
//	return 0;
//}

