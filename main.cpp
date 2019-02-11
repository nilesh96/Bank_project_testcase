#include<iostream>
#include"class.h"
using namespace std;
int main()
{
	bank *ptr;
	ptr = new bank("manish",1234,1000);
	ptr->print_data();
	ptr-> deposit(1234,500);
	ptr->withdraw(1234,200);
	cout << "end of the class " << endl;
	delete ptr;
	return 0;
}
