#include <cstdlib>
#include "bitmap.h"

using namespace std;

Employee::Employee(string id, string name, float salary, int plCount, int plClaimed) :
    EmployeeId(id), EmployeeName(name), EmployeeSalary(salary), PaidLeavesCount(plCount), 
    PaidLeavesClaimed(plClaimed) 
{}


void Employee::ChangeName(string newName)
{
    if (!newName.empty() && newName != EmployeeName)
        EmployeeName = newName;
}

/*
    The function calculates reimbursement in following steps

    1) Divide EmployeeSalary by 30 to get daily salary for Employee
    2) Take difference between Paid leaves allocated and Paid leaves Claimed
    3) Multiply daily salary of employee with the difference from step 2
*/

int Employee::CalculateLeavesReimbursement()
{
    float dailySalary = EmployeeSalary / 30.0f;
    int diff = abs(PaidLeavesCount - PaidLeavesClaimed);
    return static_cast<int>(dailySalary) * diff;
}


int Employee::GetPaidLeavesCount()
{
    return PaidLeavesCount;
}


int Employee::GetClaimedPaidLeavesCount()
{
    return PaidLeavesClaimed;
}


string Employee::GetEmployeeName()
{
    return EmployeeName;
}


string Employee::GetEmployeeId()
{
    return EmployeeId;
}


float Employee::GetEmployeeSalary()
{
    return EmployeeSalary;
}


string Manager::GetManagerDepartment()
{
    return ManagerDepartment;
}


int Manager::GetProjectsCompletedCount()
{
    return ProjectsCompleted;
}

    
Manager::Manager (string id, string name, float salary, int plCount, 
    int plClaimed, int projects, string department) : Employee(id, name, salary, plCount, plClaimed), 
    ProjectsCompleted(projects), ManagerDepartment(department)
{}

/*
    Calculate the bonus as salary of Manager employee multiplied by projects completed under their supervison
    Type cast to integer as mentioned in the problem statement description
*/

int Manager::CalculateBonus()
{
    return static_cast<int>(GetEmployeeSalary()) * ProjectsCompleted;
}