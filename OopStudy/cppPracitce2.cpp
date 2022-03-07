//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;

/*���� ������*/

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
//	SoSimple(SoSimple& copy) //���� ������
//		: num1(copy.num1), num2(copy.num2)
//	{
//		cout << "�ι�° ������ ȣ��" << endl;
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
//	cout << "���� �� �ʱ�ȭ ����" << endl;
//	SoSimple sim2 = sim1; //?? ��� ������ ���Կ����� �ɱ� SoSimple sim2(sim1)���� ��ȯ
//	cout << "���� �� �ʱ�ȭ ����" << endl;
//	sim2.ShowSimpleData();
//}

// sim2 = sim1 -> ��� �� ��� ���簡 �Ͼ 
// sim2 = sim1 == sim2(sim1)

/*
	��������ڴ� �Ϲ� �����ڿ� ȣ��Ǵ� ������ �ٸ��� . �� ����������� ȣ������� Ȯ���� �����ؾ��Ѵ�.

	������ ���ڰ� ������ ��ó�� �����! const�� ����ؼ� �����Ҷ� �Ǽ��� ����
	
	������ ���� ���������ʰ� ������� ���縦 �����ϸ� ����Ʈ ������ �ڵ����� ������.
*/

//SoSimple(const Sosimple& copy)
//	: num1(copy.num1), num2(copy.num2)
//{
//	//����
//}


/*��������ȯ�� ������� �߻��� ������ �������*/

/*
	SoSimple sim2 = sim1; �� c++���� �ڵ����� sim2(sim1)���� ����ȯ�� �ع�����.
	�ڵ����� ��������ȯ�� �����ϰ� ���� ��쿡�� ��������ȯ�� �����ع����� �ȴ�.

	������ ��ġ�� explicit�� �־������ ��! �ڵ��� ��Ȯ���� �����ֱ����� ���ȴ�.
	���̻� SoSimple sim2 = sim1; �̷��� �ϸ� �ʱ�ȭ�� ���� �ʰ� ������ ()�� ����� �ʱ�ȭ�� ����������.
*/

//explicit Sosimple(const Sosimple& copy)
//	: num1(copy.num1), num2(copy.num2)
//{
//	//����
//}

/*�������� ��������*/

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
//	//��������
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
//		cout << "�Ҹ��� ȣ��" << endl;
//	}
//
//};
//
//int main()
//{
//	Person man1("lee", 29);
//	Person man2 = man1; //����Ʈ �����ڿ� ���� ���� ����
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//}

// ����Ʈ �����ڴ� �ܼ� �����縸 ���ֱ� ������ �⺯�� �������ΰ�� �����Ͱ� ����Ű�� �ּҰ��� ����� �����͵�
// �Ȱ��� �ּҰ��� ����Ų��. ������ ������ name�� �����ڿ��� �����Ҵ��� ���ְ� �ֱ� ������ �޸𸮸� ���� ��������Ѵ�.
// ������ ���ظ޸� ���������� ���� man2�� �Ҹ�ȴ�. ..å����

//��������� �̷��� �����ͷ� �����ϴ� ������ ��� �����Ѵٴ� ������ ���������� �Ѵ�. 

//�׷� ���� ������ ȣ��Ǿ�� �ұ�? 
// 1. ������ ������ ��ü�� �̿��ؼ� ���ο� ��ü�� �ʱ�ȭ �ϴ°�� person man2 = man1;
// 2. call -by - value ����� �Լ� ȣ��������� ��ü�� ���ڷ� �����ϴ°�� func(man2);
// 3. ��ü�� ��ȯ�ϵ�, ���������� ��ȯ���� ������� person func(); 

// ���� ȣ�� ������: ��ü�� ��� ���� �����ؾ��Ѵ�. ������ ���ÿ� ������ �ڷ����� ��ü�� �ʱ�ȭ �ؾ��Ѵ�.

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

/*����ȣ���� ��ü�� �����ΰ�?*/
// case2 ����
// 
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n){}
//
//	SoSimple(const SoSimple& copy) :num(copy.num) //4. obj1�� ���ڿ� ���鼭 obj1���� ����� 
//	{
//		cout << "������ ȣ��(SoSimple& copy)" << endl; //5. �� ����ȣ���� obj���� 
//	}
//
//	void ShowData()
//	{
//		cout << "num: " << num << endl;
//	}
//
//};
//
//void SimpleFuncObj(SoSimple obj) //3. ���ھȿ� Ŭ������ obj�����ϸ鼭 ���ڿ� obj1�� �������(�����ϱ�����) obj���� ȣ��
//{
//	obj.ShowData();
//}
//
//int main()
//{
//	SoSimple obj1(7); //1. obj1��ü ���� 
//	cout << "�Լ� ȣ�� ��" << endl;
//	SimpleFuncObj(obj1); //2. �Լ� ȣ�� (���� obj1����)
//	cout << "�Լ� ȣ�� ��" << endl;
//}

//���� �ʱ�ȭ�� ����� obj1�� �ƴϰ� obj�ȿ��� ����ȴ�.

//case3����

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
//		cout << "���� ȣ�� (&copy)" << endl;
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
//	cout << "return ����" << endl;
//	return ob;
//}
//
//int main()
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj).Addnum(30).ShowData();
//	obj.ShowData();
//}

/*��ȯ�Ҷ� ������� �ӽð�ü�� ���� �������?*/

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
//		cout << "�� �⺯�� .." << num << endl;
//	}
//};
//
//int main()
//{
//	Temporary(100); //�ӽð�ü ����
//	cout << "******* after make!" << endl << endl;
//
//	Temporary(200).ShowInfo();//�ӽð�ü ����2
//	cout << "********* after make!" << endl << endl;
//
//	const Temporary& ref = Temporary(300); //�ӽð�ü ����3
//	cout << "********** end of main!" << endl << endl;
//}

// �ӽð�ü�� ���� ������ �Ѿ�� �Ҹ�Ǿ������. 
// �����ڿ� �����Ǵ� �ӽð�ü�� �ٷ� �Ҹ���� �ʴ´�. �� �����࿡���� ���� �����ϴ�. 

/*�ּҰ����� �˾ƺ��� ȣ��ñ�*/
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

