/*
Jesse Adamu
Professor Mackay
CS 132
Project 1
*/

#include <iostream>
#include "rational.h"

using namespace std;


int main()
{
rational rNum1, rNum2;
int n, d;
char FOerator, SOerator = '\0', option;  // first operator, second operator, user's option


do
{
 cout << "Please enter an expression in form a/b operator c/d" << endl;
 cin >> n;
 rNum1.setNum(n);
 cin.ignore();  // Skip the rational symbol between Rational Numerator and Rational Denominator.
 cin >> d;
 rNum1.setDen(d);


cin >> FOerator;
if(cin.peek() == '=') // peek if the second operator symbol exists
{
     SOerator = '='; // if exists, assign second operator
     cin.ignore();
}

if(FOerator != 'I' && FOerator != 'M' && FOerator != 'R'
   && FOerator != 'i' && FOerator != 'm' && FOerator != 'r')
    {
     cin >> n;
     rNum2.setNum(n);
     cin.ignore();  // Skip the rational symbol between Rational Numerator and Rational Denominator.
     cin >> d;
     rNum2.setDen(d);
     }
        
        // Print Result
switch (FOerator)
{
            // when the operator is +
     case '+':
        cout << rNum1 + rNum2;
        break;
            
            // when the operator is -
    case '-':
        cout << rNum1 - rNum2;
        break;
            
            // when the operator is *
    case '*':
        cout << rNum1 * rNum2;
        break;
            
            // when the operator is /
case '/':
        cout << rNum1 / rNum2;
        break;
            
            // when the operator is R or r
case 'R':
case 'r':
        rNum1.reduce();
        cout << rNum1;
        break;
            
            // when the operator is I or i
case 'I':
case 'i':
        rNum1.invert(rNum1);
        cout << rNum1;
        break;
                
            // when the operator is M or m
case 'M':
case 'm':
        rNum1.mixed();
        cout << rNum1;
break;
                
            // when the operator is <
case '<':
        if(SOerator == '=') // when the operator is <=
        {
            if(rNum1 <= rNum2)
                cout << "Ture\n";
            else
                cout << "False\n";
                break;
        }
        else if(rNum1 < rNum2)
            cout << "Ture\n";
        else
            cout << "False\n";
            break;
                
            // when the operator is >
case '>':
        if(SOerator == '=') // when the operator is >=
        {
            if(rNum1 >= rNum2)
                cout << "True\n";
            else
                cout << "False\n";
                break;
        }
        else if(rNum1 > rNum2)
            cout << "True\n";
        else
            cout << "False\n";
            break;
            
            // when the operator is ==
case '=':
         if(SOerator == '=')
        {
            if(rNum1 == rNum2)
                cout << "True\n";
            else
                cout << "False\n";
                break;
        }
        else if(rNum1 == rNum2)
            cout << "True\n";
        else
            cout << "False\n";
            break;
                
    default:
            break;
        } // end of Switch statement
        
        // Prompt user to try again or not
        cout << "\nAgain(Y or N)? ";
        cin >> option;

} while (option == 'Y' || option == 'y');

return 0;
}