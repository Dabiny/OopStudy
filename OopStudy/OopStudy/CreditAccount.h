//#ifndef __CREDIT_ACCOUNT_H__
//#define __CREDIT_ACCOUNT_H__
//
//#include "DonateAccount.h"
//
//
//class CreditAccount : public DonateAccount
//{
//private:
//	int credit;
//
//public:
//	CreditAccount(int _id, int _balance, const char* _name, int _donate, int _credit)
//		: DonateAccount(_id, _balance, _name, _donate), credit(_credit)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val;
//
//		val = money * 0.01;
//		Account::DePositMoney(money + val);
//
//		this->credit += val;
//	}
//
//};
//
//#endif // !__CREDIT_ACCOUNT_H__