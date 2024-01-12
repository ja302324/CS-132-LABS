#include <iostream>
using namespace std;

//prototype
int factorial(int);


int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;


    cout << num << "factorial is : " << factorial(num) << endl;
}

int factorial(int f)
{
    if(f == 0)
        return 1;

    return f * factorial(f -1);
}