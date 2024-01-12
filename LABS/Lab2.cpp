#include<iostream>
#include "StudeentClass.h"
using namespace std;
//class definition

int main()
{
	student users[5];
	student user1;
	string f, l;
    double g;
	int a;
	cout << "Enter the info for the 5 users\n";

	for (int pos = 0; pos < 5; pos++)
	{
		cout << "Enter a first and last name: ";
		cin >> f >> l;
		cout << "Enter an gpa: ";
		cin >> g;
        cout << "Enter the number of credits: ";
        cin >> a;

	
	users[pos].setFirst(f);
	users[pos].setLast(l);
	users[pos].setGPA(g);
	users[pos].setCreds(a);
    }

	for (int pos = 0; pos < 5; pos++)
    {
        	users[pos].printInfo();
    }

    return 0;
}

