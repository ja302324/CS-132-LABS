// Jesse Adamu
// CS132-02
// Lab 1
// 09/06/2022

#include <iostream>
#include <string>

using namespace std; 

//create the class definition here
class partTimeEmployee {
public:
	void print();
	void setName(string, string);
	void setRate(double);
	void setHours(int);
	double calculatePay();
    partTimeEmployee();
    partTimeEmployee(string, string, double, double);

private:
	double payRate;
	double hoursWorked;
    string fName;
    string lName;
	
 };
   
int main()
{
	string fName, lName;
	double pay, hours;
	partTimeEmployee newEmp;    //define a partTimeEmployee, called newEmp

	//values before setting
	newEmp.print();  //what values should be printed here??

	// Now to get and set the values
	cout << "\nEnter the employees first name and last name: ";
	cin >> fName >> lName;
	cout << "Enter the employees pay rate: ";
	cin >> pay;
	cout << "Enter the employees number of hours: ";
	cin >> hours;
	
	//calling some of the public member functions
	//to pass the information into the class object
	newEmp.setName(fName, lName);
	newEmp.setRate(pay);
	newEmp.setHours(hours);
    

	// printing the values for that employee
    newEmp.print();

    return 0;
}

//the class member function definitions go down here

void partTimeEmployee::print() // definition of print()
{
	cout << "their wages are: " << calculatePay() << endl;
}

void partTimeEmployee::setName(string firstname , string lastname) // Definition of setNAme
{
    fName = firstname;
    lName = lastname;
}

void partTimeEmployee::setRate(double hpayrate) //Definition of setRate
{
    payRate = hpayrate;
}

void partTimeEmployee::setHours(int hourly) //Definition of setHours
{
   hoursWorked = hourly;
}

double partTimeEmployee::calculatePay() //Definition of calculatePay
{
    return (payRate * hoursWorked);
}

partTimeEmployee::partTimeEmployee(string f, string l, double pR, double hW)
{
    fName = f;
    lName = l;
    payRate = pR;
    hoursWorked = hW;

}
