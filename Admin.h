#include "CommissionEmployee.h"
using namespace std;

class Admin : public CommissionEmployee
{
public:
	Admin(string&, string&, string&, double = 0.0, double = 0.0);

	void inBonus(double);
	double getBonus();
	double getTasksPerMonth();
	string getTitle();
	double earnings();
	void inFirstName(string);
	void inLastName(string);
	void inSSN(string);
	void inGrossSales(double);
	void inCommissionRate(double);
	void inTasksPerMonth(double);
	void inTitle(string);
	void getInfo(string, string, string, string, double, double, double, double);
	void printInfo();
    
private:
    string Title;
    double Bonus;
    int tasksPerMonth;
	double baseSalary;
    
};
