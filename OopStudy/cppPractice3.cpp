//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;


/*�ܽ�Ʈ ��ü*/

//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n) {}
//	SoSimple& AddNum(int n) //�� �Լ��� �ܽ�Ʈ�Լ��� �ƴϱ⶧���� ȣ��Ұ���!
//	{
//		num += n;
//		return *this;
//	}
//
//	void ShowData() const //ȣ�� ����
//	{
//		cout << "num: " << num << endl;
//	}
//};
//
//int main()
//{
//	const SoSimple obj(7); //�ܽ�Ʈ ��ü ����
//	obj.ShowData();
//}

//�ܽ�Ʈ ���� ������ �Լ� �����ε��� ���ǿ� �ش��


/*friend ����*/

//class Boy
//{
//private:
//	int height;
//	friend class Girl;
//
//public:
//	Boy(int len):height(len){}
//};
//
//class Girl
//{
//private:
//	char phNum[20];
//	
//public:
//	Girl(char* num)
//	{
//		strcpy(phNum, num);
//	}
//
//	void ShowYourFriendInfo(Boy& frn)
//	{
//		cout << "His height: " << frn.height << endl; //private����� ����(�ټ��Լ�����)
//	}
//
//	friend class Boy; //Ŭ���� ���̿� ģ������ 
//};


//class Point;
//
//class PointOP
//{
//private:
//	int opcnt;
//
//public:
//	PointOP():opcnt(0){}
//
//	Point PointAdd(const Point&, const Point&);
//	Point PointSub(const Point&, const Point&);
//
//	~PointOP() { cout << "Operation times: " << opcnt << endl; }
//
//};
//
//class Point
//{
//private:
//	int x;
//	int y;
//
//public:
//	Point(const int& xpos, const int& ypos) :x(xpos), y(ypos)
//	{}
//	friend Point PointOP::PointAdd(const Point&, const Point&);
//	friend Point PointOP::PointSub(const Point&, const Point&);
//	friend void ShowPointPos(const Point&);
//};
//
//Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
//{
//	opcnt++;
//	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
//}
//
//Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
//{
//	opcnt++;
//	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
//}
//
//int main()
//{
//	Point pos1(1, 2);
//	Point pos2(2, 4);
//
//	PointOP op;
//
//	ShowPointPos(op.PointAdd(pos1, pos2));
//	ShowPointPos(op.PointSub(pos1, pos2));
//}
//
//void ShowPointPos(const Point& pos)
//{
//	cout << "x: " << pos.x << ",";
//	cout << "y: " << pos.y << endl;
//}

/*��������*/

//int simObjCnt = 0;
//int cmxObjCnt = 0;
//
//class SoSimple
//{
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//		cout << simObjCnt << "��° SoSimple��ü" << endl;
//	}
//};
//
//class SoComplex
//{
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex��ä" << endl;
//	}
//
//	SoComplex(SoComplex& copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//};
//
//int main()
//{
//	SoSimple sim1;
//	SoSimple sim2;
//
//	SoComplex com1;
//	SoComplex com2 = com1;
//	SoComplex();
//}

