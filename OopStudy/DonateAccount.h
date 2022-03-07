//#ifndef __DONATE_ACCOUNT_H__
//#define __DONATE_ACCOUNT_H__
//
//#include "Account.h"
//
//
//class DonateAccount : public Account
//{
//private:
//	int donate; //기부금액
//
//public:
//	DonateAccount (int _id, int _balance, const char* _name, int _donate)
//		: Account(_id, _balance, _name), donate(_donate)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val; //기부금 1%를 저장하기위해 만든 변수
//		
//		val = money * 0.01; // 기부금 저장
//
//		Account::DePositMoney(money - val);
//
//		this->donate += val;
//	}
//
//};
//
//#endif 