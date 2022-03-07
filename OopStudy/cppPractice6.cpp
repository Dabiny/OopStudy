#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x=0, int y=0) : xpos(x),ypos(y)
//	{}
//
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	friend Point operator+(const Point& pos1, const Point& pos2);
//	//인트메인에 있던 오버로딩 발동
//};
//
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	//오퍼레이터 내부엔 Point pos를 생성하여 인자로받아온 pos1,pos2의 멤변들을 각각 더해서 
//	//인자를 생성해주고 있음
//	return pos;
//	// 리턴형이 Point형 pos를 리턴해주는 형태 
//}
//
//int main()
//{
//	Point Pos1(3, 4);
//	Point Pos2(10, 20);
//
//	Point Pos3 = Pos1 + Pos2; 
//	//1. -> pos3 = operator+(pos1,pos2);로 전역형태로 오버로딩됨
//	// pos2의 private멤변을 가져오기 위해선 friend로 전역접근을 할 수밖에없음
//
//	Pos1.ShowPosition(); //3,4
//	Pos2.ShowPosition(); // 10, 20
//	Pos3.ShowPosition(); // 13, 24 -> 결과값임 ! 
//}

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{}
//
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//
//		return *this;
//	}
//
//	friend Point& operator--(Point& ref);
//};
//
// Point& operator--(Point& ref)
//{
//	 ref.xpos -= 1;
//	 ref.ypos -= 1;
//
//	 return ref;
//}
//
//int main()
//{
//	Point pos(1, 2);
//	++pos;
//
//	pos.ShowPosition();
//	--pos;
//
//	++(++pos);
//	pos.ShowPosition();
//	
//	--(--pos);
//	pos.ShowPosition();
//
//	return 0;
//} 


//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{}
//
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//
//		return *this;
//	}
//
//	const Point operator++(int) //후위증가
//	{
//		const Point retobj(xpos, ypos);
//		xpos += 1;
//		ypos += 1;
//
//		return retobj;
//	}
//
//	friend Point& operator-- (Point& ref);
//	friend const Point operator-- (Point& ref, int);
//};
//
//Point& operator--(Point& ref)// --pos
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	
//	return ref;
//}
//
//const Point operator--(Point& ref, int) //pos--
//{
//	const Point retobj(ref);
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//
//	return retobj;
//}
//
//int main()
//{
//	Point pos(3, 5);
//	Point cpy;
//
//	cpy = pos--;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	cpy = pos++;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	return 0;
//} 


//namespace mystd
//{
//	using namespace std;
//}
//
//class ostream
//{
//public:
//	void operator<<(char* str)
//	{
//		printf("%s", str);
//	}
//
//	void operator<< (char str)
//	{
//		printf("%c", str);
//	}
//
//	void operator<< (int num)
//	{
//		printf("%d", num);
//	}
//
//	void operator<< (double e)
//	{
//		printf("%g", e);
//	}
//
//	void operator<< (ostream& (*fp)(ostream& ostm))
//	{
//		fp(*this);
//	}
//
//};
//
//ostream& endl(ostream& ostm)
//{
//	ostm << 'n';
//	fflush(stdout);
//	return ostm;
//}
//
//int main(void)
//{
//	using mystd::cout;
//	using mystd::endl;
//
//	cout << "Simple String"; //cout의 정체는 연산자오버로딩된 객체이다.
//	cout << endl; //엔델은 함수형태
//	cout << 3.14;
//	cout << endl;
//	cout << 123;
//	endl(cout);
//}

/*대입연산지 오버로딩*/

//class First
//{
//private:
//	int num1, num2;
//
//public:
//	First(int n1 = 0, int n2 = 0):num1(n1), num2(n2)
//	{}
//
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//};
//
//class Second
//{
//private:
//	int num3, num4;
//
//public:
//	Second(int n1 = 0, int n2 = 0) :num3(n1), num4(n2)
//	{}
//
//	void ShowData() { cout << num3 << ", " << num4 << endl; }
//
//	Second& operator = (const Second& ref)
//	{
//		cout << "Second & operator=()" << endl;
//		num3 = ref.num3;
//		num4 = ref.num4;
//
//		return *this;
//	}
//};
//
//int main()
//{
//	First fsrc(111, 222);
//	First fcpy;
//
//	Second ssrc(333, 444);
//	Second scpy;
//
//	fcpy = fsrc;
//	scpy = ssrc;
//
//	fcpy.ShowData();
//	scpy.ShowData();
//
//	First fob1, fob2;
//	Second sob1, sob2;
//
//	fob1 = fob2 = fsrc;
//	sob1 = sob2 = ssrc;
//
//	fob1.ShowData();
//	fob2.ShowData();
//
//	sob1.ShowData();
//	sob2.ShowData();
//
//	return 0;
//}

/*콘스트기반함수 오버로딩*/

//class BoundCheckIntArray
//{
//private:
//	int* arr;
//	int arrlen;
//	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
//	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr){}
//
//public:
//	BoundCheckIntArray(int len) :arrlen(len)
//	{
//		arr = new int[len];
//	} //초기화시 동적생성으로 늘어날 수있게 
//	
//	int operator[] (int idx) const //콘스트용 오퍼레이터
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//
//		}
//	}
//
//	int& operator[] (int idx) //콘스트 아닌 그냥 오퍼레이터
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//
//	} //오퍼레이터로 0보다 작거나 동적생성된 배열크기보다 넘어간다면 예외로 넘기기
//
//	int GetArrLen() const { return arrlen; }
//	~BoundCheckIntArray() { delete[]arr; }
//};
//
//void ShowAllData(const BoundCheckIntArray& ref)
////매개변수가 콘스트 &ref로 선언되어있음
//// 함수내 배열에 저장된 데이터를 변경하지 못하도록 매개변수형이 const로 설정해놈!
//
//{
//	int len = ref.GetArrLen();
//	for (int idx = 0; idx < len; idx++)
//	{
//		cout << ref[idx] << endl;
//		// 매개변수를 const로 지정해버리면 오퍼레이터에 접근할수가 없음
//		// 오퍼레이터정의에 콘스트용 하나 더 추가정의 해줘야함!
//	}
//}
//
//int main()
//{
//	BoundCheckIntArray arr(5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = (i + 1) * 11;
//	}
//
//	ShowAllData(arr);
//
//}

/*point 객체를 저장하는 배열 기반의 클래스*/

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x=0, int y =0):xpos(x),ypos(y){}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class BoundCheckPointArray
//{
//private:
//	Point* arr;
//	int arrlen;
//
//	BoundCheckPointArray(const BoundCheckPointArray& arr){}
//	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {}
//
//public:
//	BoundCheckPointArray(int len) :arrlen(len)
//	{
//		arr = new Point[len];
//		//Point 객체로 이뤄진 배열을 생성중 인자를 받지않은 void생성자의 호출을 통해
//		//배열요소룰 이루는 객체가 생성되고, 포인트생성자에 설정된 디폴트 값에 의해 객체의
//		//모든 멤버가 0으로 초기화 됨.
//	} 
//
//	Point operator[] (int idx) const //콘스트용 오퍼레이터
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//
//		}
//		return arr[idx];
//	}
//
//	Point& operator[] (int idx) //콘스트 아닌 그냥 오퍼레이터
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//
//	} //오퍼레이터로 0보다 작거나 동적생성된 배열크기보다 넘어간다면 예외로 넘기기
//
//	int GetArrLen() const { return arrlen; }
//	~BoundCheckPointArray() { delete[]arr; }
//};
//
//int main()
//{
//	BoundCheckPointArray arr(3);
//	arr[0] = Point(3, 4);
//	arr[1] = Point(5, 6);
//	arr[2] = Point(7, 8);
//
//	for (int i = 0; i < arr.GetArrLen(); i++)
//	{
//		cout << arr[i];
//	}
//
//	return 0;
//}

/*주소값을 저장하는 방식*/

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x= 0, int y = 0) : xpos(x), ypos(y) {}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
//	return os;
//}
//
//typedef Point* POINT_PTR; //타입재정의 해줌 
//
//class BoundCheckPointPtrArray
//{
//private:
//	POINT_PTR* arr; //포인트객채를 가리키는 POINT_PTR을 가리킬수있는 포인터 arr 
//	int arrlen;
//
//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr){}
//	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr){}
//
//public:
//	BoundCheckPointPtrArray(int len) : arrlen(len)
//	{
//		arr = new POINT_PTR[len];
//		//arr이 Point객체의 주소값이기 ㄸㅐ문에 POINT_PTR배열을 생성
//	}
//
//	POINT_PTR& operator[] (int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exeption" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//	}
//
//	POINT_PTR operator[] (int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//	}
//
//	int GetArrLen() const { return arrlen; }
//	~BoundCheckPointPtrArray() { delete[]arr; }
//};
//
//int main()
//{
// 
//	BoundCheckPointPtrArray arr(3);
//	arr[0] = new Point(3, 4);
//	arr[1] = new Point(5, 6);
//	arr[2] = new Point(7, 8);
//
//	for (int i = 0; i < arr.GetArrLen(); i++)
//	{
//		cout << *(arr[i]);
//	}
//
//	delete arr[0];
//	delete arr[1];
//	delete arr[2];
//
//}

//위의 예제와 같이 주소값을 저장하는 경우, 객체의 생성과 소멸을 위한 new,delete 떔시
//더 신경쓸게 많아보이지만 깊복, 얕복에 자유로워 이방법이 더 많이 사용됨.

/*스마트 포인터*/
// : 우리가 알고있는 포인터는 자기 스스로 아무것도 할수 없지만, 스마트포인터는
// 자기 스스로 하는 일이 존재하는 포인터이다.
// 사실 스마트 포인터는 객체 . 포인터 역할을 하는 객체를 뜻하는 것

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{
//		cout << "Point 객체 생성" << endl;
//	}
//
//	~Point()
//	{
//		cout << "Point 객체 소멸" << endl;
//	}
//
//	void SetPos(int x, int y)
//	{
//		xpos = x;
//		ypos = y;
//	}
//
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class SmartPtr
//{
//private:
//	Point* posptr; //포인터 객체를 가리킬수있는 포인터변수 posptr;
//
//public:
//	SmartPtr(Point*ptr) : posptr(ptr){}
//
//	Point& operator*() const
//	{
//		return *posptr;
//	}
//
//	Point* operator->() const
//	{
//		return posptr;
//	}
//
//	~SmartPtr()
//	{
//		delete posptr;
//	}
//};
//
//int main()
//{
//	SmartPtr sptr1(new Point(1, 2)); //point 객체 동적생성
//	SmartPtr sptr1(new Point(3, 4));
//	SmartPtr sptr1(new Point(5, 6));
//
//	cout << *sptr1;
//	cout << *sptr2;
//	cout << *sptr3;
//
//	sptr1->SetPos(10, 20);
//	sptr2->SetPos(30, 40);
//}

/*펑터(functor)*/
// : 객체를 함수처럼 사용하는 형태

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x=0, int y=0) : xpos(x), ypos(y){}
//	
//	Point operator+(const Point& pos) const
//	{
//		return Point(xpos + pos.xpos, ypos + pos.ypos);
//		// Point 임시객체를 생성하여 생성과동시에 리턴가능
//	}
//
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class Adder //펑터로 설정된애 
//{
//public:
//	int operator()(const int& n1, const int& n2)
//	{
//		return n1 + n2;
//	} // Adder(2,4)의 오퍼레이터 형식이고 , 2,4 값을 더해서 리턴하고 있음
//	// Adder는 객체지만 오버로딩을 설정하여 2와 4의 값을 더해줌으로서 함수기능을
//	// 따라하고있음!
//
//	double operator() (const double& n1, const double& n2)
//	{
//		return n1 + n2;
//		// 여기서도 임시변수 생성되어 값을 저장받고 리턴후 사라짐
//	}
//
//	Point operator()(const Point& pos1, const Point& pos2)
//	{
//		return pos1 + pos2;
//	} // 객체도 더해서 넘겨줄 수 잇음!
//};

//int main()
//{
//	Adder adder; //펑터객체 선언
//	cout << adder(1, 3) << endl;
//	cout << adder(1.5, 3.7) << endl;
//	cout << adder(Point(3, 4), Point(3, 5)) << endl;
//	// adder인자에 임시객체 Point(3,4)와 임시객체 Point(3,5) 를 대입해주고 있다
//}

/*펑터 사용예제*/

//class SortRule
//{
//public:
//	virtual bool operator()(int num1, int num2) const = 0;
//}; //순수가상함수 선언
//
//class AscendingSort : public SortRule //오름차순
//{
//public:
//	bool operator()(int num1, int num2) const
//	{
//		if (num1 > num2)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//class DescandingSort : public SortRule //내림차순
//{
//public:
//	bool operator()(int num1, int num2)const
//	{
//		if (num1 < num2)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//class DataStorage //int형 저장소
//{
//private:
//	int* arr;
//	int idx;
//	const int MAX_LEN;
//
//public:
//	DataStorage(int arrlen) : idx(0), MAX_LEN(arrlen)
//	{
//		arr = new int[MAX_LEN];
//	}
//
//	void AddData(int num)
//	{
//		if (MAX_LEN <= idx)
//		{
//			cout << "더 이상 저장이 불가능 합니다. " << endl;
//			return;
//		}
//		arr[idx++] = num;
//	}
//
//	void ShowAllData()
//	{
//		for (int i = 0; i < idx; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//		cout << endl;
//	}
//
//	void SortData(const SortRule& functor)
//	{
//		for (int i = 0; i < (idx - 1); i++)
//		{
//			for (int j = 0; j < (idx - 1); j++)
//			{
//				if (functor(arr[j], arr[j + 1]))
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//};
//
//int main()
//{
//	DataStorage storage(5); //스토리지 배열5 지정
//
//	storage.AddData(40);
//	storage.AddData(30);
//	storage.AddData(50);
//	storage.AddData(20);
//	storage.AddData(10);
//
//	storage.SortData(AscendingSort());
//	//매개변수에 임시객체를 선언하여 대입하고있음 
//	storage.ShowAllData();
//
//	storage.SortData(DescandingSort());
//	storage.ShowAllData();
//
//}