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
//	//��Ʈ���ο� �ִ� �����ε� �ߵ�
//};
//
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	//���۷����� ���ο� Point pos�� �����Ͽ� ���ڷι޾ƿ� pos1,pos2�� �⺯���� ���� ���ؼ� 
//	//���ڸ� �������ְ� ����
//	return pos;
//	// �������� Point�� pos�� �������ִ� ���� 
//}
//
//int main()
//{
//	Point Pos1(3, 4);
//	Point Pos2(10, 20);
//
//	Point Pos3 = Pos1 + Pos2; 
//	//1. -> pos3 = operator+(pos1,pos2);�� �������·� �����ε���
//	// pos2�� private�⺯�� �������� ���ؼ� friend�� ���������� �� ���ۿ�����
//
//	Pos1.ShowPosition(); //3,4
//	Pos2.ShowPosition(); // 10, 20
//	Pos3.ShowPosition(); // 13, 24 -> ������� ! 
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
//	const Point operator++(int) //��������
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
//	cout << "Simple String"; //cout�� ��ü�� �����ڿ����ε��� ��ü�̴�.
//	cout << endl; //������ �Լ�����
//	cout << 3.14;
//	cout << endl;
//	cout << 123;
//	endl(cout);
//}

/*���Կ����� �����ε�*/

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

/*�ܽ�Ʈ����Լ� �����ε�*/

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
//	} //�ʱ�ȭ�� ������������ �þ ���ְ� 
//	
//	int operator[] (int idx) const //�ܽ�Ʈ�� ���۷�����
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//
//		}
//	}
//
//	int& operator[] (int idx) //�ܽ�Ʈ �ƴ� �׳� ���۷�����
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//
//	} //���۷����ͷ� 0���� �۰ų� ���������� �迭ũ�⺸�� �Ѿ�ٸ� ���ܷ� �ѱ��
//
//	int GetArrLen() const { return arrlen; }
//	~BoundCheckIntArray() { delete[]arr; }
//};
//
//void ShowAllData(const BoundCheckIntArray& ref)
////�Ű������� �ܽ�Ʈ &ref�� ����Ǿ�����
//// �Լ��� �迭�� ����� �����͸� �������� ���ϵ��� �Ű��������� const�� �����س�!
//
//{
//	int len = ref.GetArrLen();
//	for (int idx = 0; idx < len; idx++)
//	{
//		cout << ref[idx] << endl;
//		// �Ű������� const�� �����ع����� ���۷����Ϳ� �����Ҽ��� ����
//		// ���۷��������ǿ� �ܽ�Ʈ�� �ϳ� �� �߰����� �������!
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

/*point ��ü�� �����ϴ� �迭 ����� Ŭ����*/

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
//		//Point ��ü�� �̷��� �迭�� ������ ���ڸ� �������� void�������� ȣ���� ����
//		//�迭��ҷ� �̷�� ��ü�� �����ǰ�, ����Ʈ�����ڿ� ������ ����Ʈ ���� ���� ��ü��
//		//��� ����� 0���� �ʱ�ȭ ��.
//	} 
//
//	Point operator[] (int idx) const //�ܽ�Ʈ�� ���۷�����
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
//	Point& operator[] (int idx) //�ܽ�Ʈ �ƴ� �׳� ���۷�����
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//
//		return arr[idx];
//
//	} //���۷����ͷ� 0���� �۰ų� ���������� �迭ũ�⺸�� �Ѿ�ٸ� ���ܷ� �ѱ��
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

/*�ּҰ��� �����ϴ� ���*/

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
//typedef Point* POINT_PTR; //Ÿ�������� ���� 
//
//class BoundCheckPointPtrArray
//{
//private:
//	POINT_PTR* arr; //����Ʈ��ä�� ����Ű�� POINT_PTR�� ����ų���ִ� ������ arr 
//	int arrlen;
//
//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr){}
//	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr){}
//
//public:
//	BoundCheckPointPtrArray(int len) : arrlen(len)
//	{
//		arr = new POINT_PTR[len];
//		//arr�� Point��ü�� �ּҰ��̱� �������� POINT_PTR�迭�� ����
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

//���� ������ ���� �ּҰ��� �����ϴ� ���, ��ü�� ������ �Ҹ��� ���� new,delete ����
//�� �Ű澵�� ���ƺ������� ��, �躹�� �����ο� �̹���� �� ���� ����.

/*����Ʈ ������*/
// : �츮�� �˰��ִ� �����ʹ� �ڱ� ������ �ƹ��͵� �Ҽ� ������, ����Ʈ�����ʹ�
// �ڱ� ������ �ϴ� ���� �����ϴ� �������̴�.
// ��� ����Ʈ �����ʹ� ��ü . ������ ������ �ϴ� ��ü�� ���ϴ� ��

//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{
//		cout << "Point ��ü ����" << endl;
//	}
//
//	~Point()
//	{
//		cout << "Point ��ü �Ҹ�" << endl;
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
//	Point* posptr; //������ ��ü�� ����ų���ִ� �����ͺ��� posptr;
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
//	SmartPtr sptr1(new Point(1, 2)); //point ��ü ��������
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

/*����(functor)*/
// : ��ü�� �Լ�ó�� ����ϴ� ����

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
//		// Point �ӽð�ü�� �����Ͽ� ���������ÿ� ���ϰ���
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
//class Adder //���ͷ� �����Ⱦ� 
//{
//public:
//	int operator()(const int& n1, const int& n2)
//	{
//		return n1 + n2;
//	} // Adder(2,4)�� ���۷����� �����̰� , 2,4 ���� ���ؼ� �����ϰ� ����
//	// Adder�� ��ü���� �����ε��� �����Ͽ� 2�� 4�� ���� ���������μ� �Լ������
//	// �����ϰ�����!
//
//	double operator() (const double& n1, const double& n2)
//	{
//		return n1 + n2;
//		// ���⼭�� �ӽú��� �����Ǿ� ���� ����ް� ������ �����
//	}
//
//	Point operator()(const Point& pos1, const Point& pos2)
//	{
//		return pos1 + pos2;
//	} // ��ü�� ���ؼ� �Ѱ��� �� ����!
//};

//int main()
//{
//	Adder adder; //���Ͱ�ü ����
//	cout << adder(1, 3) << endl;
//	cout << adder(1.5, 3.7) << endl;
//	cout << adder(Point(3, 4), Point(3, 5)) << endl;
//	// adder���ڿ� �ӽð�ü Point(3,4)�� �ӽð�ü Point(3,5) �� �������ְ� �ִ�
//}

/*���� ��뿹��*/

//class SortRule
//{
//public:
//	virtual bool operator()(int num1, int num2) const = 0;
//}; //���������Լ� ����
//
//class AscendingSort : public SortRule //��������
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
//class DescandingSort : public SortRule //��������
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
//class DataStorage //int�� �����
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
//			cout << "�� �̻� ������ �Ұ��� �մϴ�. " << endl;
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
//	DataStorage storage(5); //���丮�� �迭5 ����
//
//	storage.AddData(40);
//	storage.AddData(30);
//	storage.AddData(50);
//	storage.AddData(20);
//	storage.AddData(10);
//
//	storage.SortData(AscendingSort());
//	//�Ű������� �ӽð�ü�� �����Ͽ� �����ϰ����� 
//	storage.ShowAllData();
//
//	storage.SortData(DescandingSort());
//	storage.ShowAllData();
//
//}