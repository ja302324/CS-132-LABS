/*
Jesse Adamu
Professor Mackay
CS 132
10-18-2022
*/

#include <iostream>
#include "linkedlist1.h"

using namespace std;

int main()
{
    List newly;
    int value, SIZE = 15; //creating integer named value
    

    for (int i = 0; i < SIZE; i++)
    {
        cout << "What are your values: ";
        cin >> value;
        newly.insert(value, i);
    }
    
    cout << "What number would you like to search for? \n ";
    cin >> value;
    cout << "item found at: " << newly.search(value);

   
    cout << "and there are: "<< newly.howMany(value);
    
    return 0;
}