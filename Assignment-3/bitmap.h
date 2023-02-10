class Account
{
	int accno;
	char name[20];
	double balance;
public:
	Account();
	Account(int, const char*, double);
	void accept();
	void display();
	void deposite(int);
	void withdraw(int);
	int getAccno();
	char* getName();
	double getBalance();
	void setAccno(int);
	void setName(const char*);
	void setBalance(double);
	static bool searchAccountById(Account *, int, int);
	static double getHighestBalance(Account*,int);
	static double getLowestBalance(Account*,int);
};
