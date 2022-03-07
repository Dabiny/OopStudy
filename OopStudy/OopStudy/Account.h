//#ifndef __ACCOUNT_H__
//#define __ACCOUNT_H__
//
//
//class Account
//{
//private:
//	int id;
//	int balance;
//	char* name;
//
//public:
//
//	Account(int _id, int _balance, const char* _name)
//		: id(_id), balance(_balance)
//	{
//		name = new char[strlen(_name) + 1];
//		strcpy(name, _name);
//	}
//
//	Account(const Account& copy) : id(copy.id), balance(copy.balance), name(copy.name)
//	{
//		name = new char[strlen(copy.name) + 1];
//		strcpy(name, copy.name);
//	}
//
//	~Account()
//	{
//		delete[]name;
//	}
//
//	int GetId() const { return id; }
//	int GetBalance() const { return balance; }
//
//	virtual void DePositMoney(int money)
//	{
//		this->balance += money;
//	}
//
//	int WithDrawMoney(int money)
//	{
//		this->balance -= money;
//		return balance;
//	}
//
//	void ShowInfo() const
//	{
//		cout << "°èÁÂ¹øÈ£ : " << id << endl;
//		cout << "ÀÌ¸§ : " << name << endl;
//		cout << "ÀÜ¾× : " << balance << endl;
//	}
//
//};
//
//#endif // !__ACCOUNT_H__