//#ifndef __DONATE_ACCOUNT_H__
//#define __DONATE_ACCOUNT_H__
//
//#include "Account.h"
//
//
//class DonateAccount : public Account
//{
//private:
//	int donate; //��αݾ�
//
//public:
//	DonateAccount (int _id, int _balance, const char* _name, int _donate)
//		: Account(_id, _balance, _name), donate(_donate)
//	{}
//
//	virtual void DePositMoney(int money)
//	{
//		int val; //��α� 1%�� �����ϱ����� ���� ����
//		
//		val = money * 0.01; // ��α� ����
//
//		Account::DePositMoney(money - val);
//
//		this->donate += val;
//	}
//
//};
//
//#endif 