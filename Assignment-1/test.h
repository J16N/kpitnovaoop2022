#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class calcTestSuite:public CxxTest::TestSuite
{
    public:
        void testAddition()
        {
            Complex c1(2, 4);
            Complex c2(3, 6);
            Complex c3 = c1 + c2;
            Complex c4(5, 10);
            bool status = (c3 == c4);
            TS_ASSERT_EQUALS(status, true);
        }

        void testSubtraction()
        {
            Complex c1(2, 6);
            Complex c2(3, 4);
            Complex c3 = c1 - c2;
            Complex c4(-1, 2);
            bool status = (c3 == c4);
            TS_ASSERT_EQUALS(status, true);
        }

        void testPreIncrement()
        {
            Complex c1(2, 4);
            c1 = ++c1;
            Complex c2(3, 5);
            bool status = (c1 == c2);
            TS_ASSERT_EQUALS(status, true);
        }

        void testPostIncrement()
        {
            Complex c1(2, 4);
            c1 = c1++;
            Complex c2(2, 4);
            bool status = (c1 == c2);
            TS_ASSERT_EQUALS(status, true);
        }
};
