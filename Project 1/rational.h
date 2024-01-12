#pragma once

#ifndef rational_h
#define rational_h


#include <iostream>

using namespace std;

class rational
{
    friend ostream& operator << (ostream&, const rational&); // overload << operator
    friend void foo();

public:
    rational(int = 0, int = 0); // Constructor
    
    int getNum() const; // Fetch numerator
    int getDen() const; // Fetch denominator
    void setNum(int);   // Set numerator
    void setDen(int);   // Set denominator
    void invert(rational&); // Invert fractioin
    void mixed();  // Find Mixed fraction
    void reduce(); // Reduce fraction
    bool exception1() const;   // Exception Case1: if denominator and numberator are the same, just display 1.
    bool exception2() const;   // Exception Case2: if denominator is 1, just display numerator.
    
    rational operator + (const rational&); // overload addition operator
    rational operator - (const rational&); // overload subtraction operator
    rational operator * (const rational&); // overload multipliacation operator
    rational operator / (const rational&); // overload division operator
    bool operator < (const rational&) const;  // overload less than operator
    bool operator <= (const rational&) const; // overload less than or equal to operator
    bool operator > (const rational&) const;  // overload greater than operator
    bool operator >= (const rational&) const; // overload greater than or equal to operator
    bool operator == (const rational&) const; // overload greater equal operator
    
private:
    int numerator ;  // numerator
    int denominator; // denominator
    int lPart = 0;   // left part of the mixed function

};
#endif
