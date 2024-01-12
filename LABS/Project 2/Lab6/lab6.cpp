#include <iostream>

using namespace std;

#include "LStack1.h"



int main()
{
    Stack factor;
    int num, divider;
    
    cout << "Enter an integer greater than 1: ";
    cin >> num;
    
    if(num > 1)
    {
        divider = 2;
        while(num != 1)
            if(num % divider == 0)
            {
                factor.push(divider);
                num = num/divider;
            }
            else
                divider++;
        
    }
    
    
    
        return 0;
}
