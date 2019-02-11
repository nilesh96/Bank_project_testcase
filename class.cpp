#include<iostream>
#include"class.h"
using namespace std;
//bank class constructor is adding
bank::bank (string dup_name, int dup_ac,int dup_balance)
	{
		cout << "constructor" << endl;
		name = dup_name;
		ac= dup_ac;
		balance=dup_balance;  
	}
//writing the destructor in the class.cpp
bank::~bank()
	{
		cout << "destrucotr  successfully deallocate memory" << endl;
	}

void bank::print_data()
	{
		cout << "name = " <<name << endl;
		cout << "acc no is " << ac << endl;
		cout << "balance = " << balance;
	}
void bank::deposit (int ac, int amount) {
	if(ac==1234)
	{
		balance=balance+amount;
		cout<<"\n\nMessage: You have successfully deposited Rs."<<amount<<" into your account.\n\nYour Current Balance is:"<<balance<<"\n\n";
	}
	return;
}
void bank::withdraw(int ac,int amount) {
	if(ac==1234)
	{
		if(balance<amount)
		{
			cout << "we can not withdraw the amount" << endl;
		}
		else
		{
			balance = balance - amount;
			//cout<<"You have Withdrawn Rs."<<amount<<" Successfully\n\n Your account balance is:"<<balance<<"\n\n";
		}
	}
	else
	{
		cout<<"You have entered invalid account number";
	}
	return;
}
float bank::chkbalance(int ac) 
{
	if(ac==1234)
	{
		cout<<"Your Account balance is Rs."<< balance <<endl;

	}
	else
	{
		cout << "Account Doesn't Exist!!" << endl;
	}
	return balance;
}

