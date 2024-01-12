#ifndef ITEM_H
#define ITEM_H



#include <string>
using namespace std;


// itemType struct
struct itemType
{
    int itemNumber;
    int numberInStock;
    double unitPrice;
    int minimumInventoryLevel;
    string itemName;
};

istream& operator>>(istream& in, itemType& aItem);

ofstream& operator<<(ofstream& out, const itemType& aItem);

#endif
