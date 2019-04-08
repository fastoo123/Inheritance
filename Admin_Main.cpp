#include <iostream>
#include "Admin.h"

using namespace std;

int main()
{
	
	string title, first, last, ssn;
	double sales = 0, rate = 0.1, tasks = 0, bonus = 0;

	cout << "Welcome Administrator. We have been waiting for your arrival. To confirm your identity, please enter your information." << endl;
	Admin admin1(first, last, ssn, sales, rate);

	admin1.getInfo(title, first, last, ssn, sales, rate, tasks, bonus);

	admin1.printInfo();
	


	
	system("pause");
}
