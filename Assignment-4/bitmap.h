#ifndef BITMAP_H
#define BITMAP_H

#include<iostream>

class Employee
{
private:

    /*
        class data members
    */
    std::string EmployeeId;
    std::string EmployeeName;
    float EmployeeSalary;
    int PaidLeavesCount;
    int PaidLeavesClaimed;

public:

    //default constructor
    Employee() {}

    //Parameterized constructor
    Employee(std::string id, std::string name, float salary, int plCount, int plClaimed);
    
    /*
        class method declaration
    */
    void ChangeName(std::string newName);

    int CalculateLeavesReimbursement();

    int GetPaidLeavesCount();
    int GetClaimedPaidLeavesCount();
    float GetEmployeeSalary();
    std::string GetEmployeeName();
    std::string GetEmployeeId();

    ~Employee() {}
};

class Manager : public Employee
{
private:
    int ProjectsCompleted;
    std::string ManagerDepartment;
public:

    Manager (std::string id, std::string name, float salary, int plCount, 
        int plClaimed, int projects,std::string department);

    int CalculateBonus();

    std::string GetManagerDepartment();
    int GetProjectsCompletedCount();

    ~Manager () {}
};

#endif