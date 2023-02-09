#include<cxxtest/TestSuite.h>
#include"bitmap.h"

class TestStudent:public CxxTest::TestSuite
{
public:
	void testCalcAverage()
	{
		Student s1(1,"test",62,62,50,60,60);
		float avg=s1.calcAverage();
		TS_ASSERT_EQUALS(avg,58.8f);
	}	
};












