#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
// Declare and initialize constant
const double SALE_TAX = 0.0825;  
//declare variables
double wholePrice, markupRate, salePrice, totalprice; 
// Decimal Formatting
cout << setprecision(2) << fixed << showpoint;
//User prompts and input
cout << "Enter the Whole price: ";
cin >> wholePrice; 
cout << "Enter the Markup rate: ";
cin >> markupRate;

// (CALCULATE)
salePrice = wholePrice + markupRate; 
totalprice = salePrice * SALE_TAX;
//OUTPUT
cout << "the total price of the item is: " << totalprice + salePrice << '$';
} // end main