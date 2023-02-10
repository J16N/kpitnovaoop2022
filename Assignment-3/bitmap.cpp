#include<iostream>
#include<cstring>
#include<algorithm>
#include"bitmap.h"
using namespace std;

Account::Account(): accno(0), balance(0.0)
{
    name[0] = '\0';
}

Account::Account(int acc, const char *n, double bal): accno(acc), balance(bal)
{
    strcpy(name, n);
}

void Account::accept()
{
    cout << "Account Number: ";
    cin >> accno;

    cout << "Account Name: ";
    cin >> name;

    cout << "Account Balance: ";
    cin >> balance;
}

void Account::display()
{
    cout << "Account Number: " << accno << "\n";
    cout << "Account Name: " << name << "\n";
    cout << "Account Balance: " << balance << "\n";
}

void Account::deposite(int amount)
{
    if (amount >= 0) {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if (amount >= 0) {
        balance -= amount;
    }
}

int Account::getAccno()
{
    return accno;
}
    
char* Account::getName()
{
    return name;
}

double Account::getBalance()
{
    return balance;
}

void Account::setAccno(int id)
{
    accno = id;
}

void Account::setName(const char *n)
{
    strcpy(name, n);
}

void Account::setBalance(double bal)
{
    balance = bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
    bool status = false;
    
    for (int i = 0; i < size; ++i) {
        if (accounts[i].getAccno() == id) {
            status = true;
            break;
        }
    }
    
    return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
    Account highestBalAccount = *max_element(accounts, accounts + size, 
        [](Account &a, Account &b) { return a.getBalance() < b.getBalance(); });

    int highestBal = highestBalAccount.getBalance();
    return highestBal;
}

double Account::getLowestBalance(Account *accounts, int size)
{
    Account lowestBalAccount = *min_element(accounts, accounts + size, 
        [](Account &a, Account &b) { return a.getBalance() < b.getBalance(); });

    int lowestBal = lowestBalAccount.getBalance();
    return lowestBal;
}
