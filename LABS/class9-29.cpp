#include <iostream>

using namespace std;


bool Greater(int *n1, int *n2)
{
    if( *n1 > *n2)
    return true;
    else 
    return false;
};


int main()
{
    int *num1, *num2;
    bool answer;

    num1 = 0; num2 = NULL;
    num1 = new int;
    num2 = new int;


    *num1 = 45;
    *num2 = 42;

    answer = Greater(num1, num2);
    cout << boolalpha;
    cout << "the answer is: " << answer << endl;
    
    
    /*if(*num1 > *num2)
    cout << "true\n";
    else
    cout << "false\n";*/


    return 0;
}