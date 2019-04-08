#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(string& first, string& last, string& ssn, double sales, double rate)
	: CommissionEmployee(first, last, ssn, sales, rate)
{

}

void Admin::inBonus(double bonus)
{
	cout << "Enter your bonus: " << endl;
	cin >> bonus;
	Bonus = bonus;
}

void Admin::inTasksPerMonth(double tasks)
{
	cout << "Enter the number tasks you have done this month: " << endl;
	cin >> tasks;
	tasksPerMonth = tasks;
}

double Admin::getTasksPerMonth()
{
	return tasksPerMonth;
}

double Admin::getBonus()
{
	return Bonus;
}

double Admin::earnings()
{
	return (getBonus() * getTasksPerMonth()) + CommissionEmployee::earnings();
}

void Admin::inFirstName(string first)
{
	cout << "Enter your first name: " << endl;
	cin >> first;
	setFirstName(first);
}

void Admin::inLastName(string last)
{
	cout << "Enter your last name: " << endl;
	cin >> last;
	setLastName(last);
}

void Admin::inSSN(string ssn)
{
	cout << "Enter your social security number: " << endl;
	cin >> ssn;
	setSocialSecurityNumber(ssn);
}

void Admin::inGrossSales(double sales)
{
	cout << "Enter your number of sales: " << endl;
	cin >> sales;
	setGrossSales(sales);
}

void Admin::inCommissionRate(double rate)
{
	cout << "Enter the commission rate: " << endl;
	cin >> rate;
	try
	{
		setCommissionRate(rate);
	}
	catch (const std::invalid_argument& e)
	{
		cout << "Rate has to be between 0 and 1." << endl;
	}
}

string Admin::getTitle()
{
	return Title;
}

void Admin::inTitle(string title)
{
	cout << "Enter your Title: " << endl;
	cin >> title;
	Title = title;
}

void Admin::getInfo(string title, string first, string last, string ssn, double sales, double rate, double tasks, double bonus)
{
	inTitle(title);
	inFirstName(first);
	inLastName(last);
	inSSN(ssn);
	inGrossSales(sales);
	inCommissionRate(rate);
	inTasksPerMonth(tasks);
	inBonus(bonus);
}

void Admin::printInfo()
{
	cout << "Full Name with Title: " << getTitle() << ". " << getFirstName() << " " << getLastName() << endl
		<< "Social Security Number: " << getSocialSecurityNumber() << endl
		<< "Gross Sales: " << getGrossSales() << endl
		<< "Commission Rate: " << getCommissionRate() << endl
		<< "Tasks Performed: " << getTasksPerMonth() << endl
		<< "Bonus per Task: " << getBonus() << endl
		<< "Total Earnings: " << earnings() << endl;
}