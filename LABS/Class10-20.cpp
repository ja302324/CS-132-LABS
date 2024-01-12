#include <iostream>

using namespace std;

#include "linkedlist.h"

int main()
{
    List myList;
    int num1; 

    for(int pos = 0; pos < 10; pos++)
    {
        cout << "Enter an integer: ";
        myList.insert(num1, 0);
        cin >> num1;
    }

    cout << "Before sorting\n";
    cout << myList;

    myList.sortList();
    //cout << "The smallest value is: " << myList.findSmallest();
   cout << "After sorting \n";
   cout << myList;

    return 0;
}