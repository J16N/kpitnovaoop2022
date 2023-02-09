#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class TestComplex:public CxxTest::TestSuite
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
};
