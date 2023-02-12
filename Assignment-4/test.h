
#include "bitmap.h"
#include <cxxtest/TestSuite.h>
class SampleTestSuite : public CxxTest::TestSuite
{
public:

    //Validate Manager object
    void testOne( void )
    {
       Manager m1("MG101", "John Smith", 45000.00,31,10,3,"IT");
        TS_ASSERT(m1.GetEmployeeId() == "MG101");
        TS_ASSERT(m1.GetEmployeeName() == "John Smith");
        TS_ASSERT(m1.GetEmployeeSalary() == 45000.00);
        TS_ASSERT(m1.GetPaidLeavesCount() == 31);
        TS_ASSERT(m1.GetClaimedPaidLeavesCount() == 10);
        TS_ASSERT(m1.GetManagerDepartment() == "IT");
        TS_ASSERT(m1.GetProjectsCompletedCount() == 3);
    }

    //validate Employee object
    void testTwo( void )
    {
        Employee e1("EM01", "John Smith", 30000.00,31,10);
        TS_ASSERT(e1.GetEmployeeId() == "EM01");
        TS_ASSERT(e1.GetEmployeeName() == "John Smith");
        TS_ASSERT(e1.GetEmployeeSalary() == 30000.00);
        TS_ASSERT(e1.GetPaidLeavesCount() == 31);
        TS_ASSERT(e1.GetClaimedPaidLeavesCount() == 10);
    }

    //Validate CalculateLeavesReimbursement functionality
    void testThree( void )
    {
        Employee e1("EM01", "John Smith", 30000.00,31,10);
        TS_ASSERT(e1.CalculateLeavesReimbursement() == 21000);

    }

    //Validate CalculateBonus functionality
    void testFour( void )
    {
        Manager m1("MG101", "John Smith", 45000.00,31,10,3,"IT");
        TS_ASSERT(m1.CalculateBonus() == 135000);
    }

    //validate ChangeName functionality
    void testFive( void )
    {
        Employee e1("EM01", "John Smith", 30000.00,31,10);
        e1.ChangeName("Jacob Smith");
        TS_ASSERT(e1.GetEmployeeName() == "Jacob Smith");
    }    
    
};
