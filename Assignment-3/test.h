#include<cxxtest/TestSuite.h>
#include"bitmap.h"

class TestAccount:public CxxTest::TestSuite
{
public:
	void testDeposite()
	{
		Account a1;
		a1.setBalance(20000);
		a1.deposite(5000);
		TS_ASSERT_EQUALS(a1.getBalance(),25000);
	}
	
	void testGetHighestBalance()
	{
		int i;
		Account a[5];
		for(i=0; i<5; i++)
		{
			a[i].setBalance((i+1)*1000);
		}
		int bal=Account::getHighestBalance(a,5);
		TS_ASSERT_EQUALS(bal,5000);
	}
	
};












