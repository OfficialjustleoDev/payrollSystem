#include <iostream>
using namespace std;
class emp {
public:
string NAME1st;//THIS IS WHERE I DECLARE MY VARIABLES
string NAME2nd;
emp(string name, string surname) {
NAME1st = name;
NAME2nd = surname;
};
void getinfo() {//GETINFO() IS USED TO GO AD GET INFO FROM CODD
cout << "----EMPLOYEE INFORMATION----" << endl;
cout << "NAME : " << NAME1st << endl;
cout << "SURNAME : " << NAME2nd << endl;
}
};
class Salary :public emp {//CLASS SALARY IS WHERE I TAKE SALARY AND CALCULATE FOR NET PAY
public:
double Payment;
Salary(string name, string surname, double payment)
:emp(name, surname)
{
Payment = payment;
}
void getSalary() {
cout << "Salary = R " << Payment << endl;
}
void calculateNet() {
int netpay = Payment * 12;
cout << "NETPAY = R "<< netpay << endl;
}
};
int main()//THIS WHERE ALL THE INFOMATIONIS STORED
{
emp employee = emp("Leo","Mahlangu");
employee.getinfo();
cout << endl;
Salary calc = Salary("Tsiamo", "Modikwe", 50000);
calc.getinfo();
calc.getSalary();
calc.calculateNet();
return 0;
}
