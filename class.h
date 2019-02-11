#include<iostream>
using namespace std;

class bank {

private:
	string name;
	int ac;
	float balance;
public:
	bank(string , int ,int );
	~bank();
//	float chkbalance(int);
	void print_data();
	void deposit(int ,int);
	void withdraw(int ,int);
protected:
	float chkbalance(int);
};
