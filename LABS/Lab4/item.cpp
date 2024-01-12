
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
#include "Item.h"

istream& operator>>(istream& in, itemType& aItem)
{
    in >> aItem.itemNumber;
    in >> aItem.numberInStock;
    in >> aItem.minimumInventoryLevel;
    in >> aItem.numberInStock;
    in >> aItem.unitPrice;

    return in;   
}

ofstream& operator<<(ofstream& out, const itemType& aItem)
{
    out << fixed << showpoint << setprecision(2);
    
    out << right << aItem.itemNumber << ' '
    << setw (2) << aItem.numberInStock << ' '
    << setw (6) << aItem.unitPrice << ' '
    << setw (3) << aItem.minimumInventoryLevel << ' '
    << aItem.itemName << endl;
    return out;
}
