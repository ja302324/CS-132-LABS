#include <iostream>

using namespace std;

struct person
{
    string name;
    int age;

};

int main()
{
    int *p, *q; //both p and q are pointers
    int n1, n2;
    double *d1, *d2;
    person *guy;
    person otherguy;

    string *st;

    st = new string; // Allocates a new spot for st

    cout << "How many intergers/ ";
    cin >> n1;

    p = new int[n1];
    delete [] p;
    p = new int[n1 + 6];

    /* *st = "Mo";
    delete st; // deallocates the previous spot of st

    st = new string;

    guy = &otherguy;

    guy->name = "Bob"; //accessing the member name and assgning the string Bob to name through the pointer

    cout << otherguy.name << endl;*/

    /*
    p = &n1; // assigning the address of n1 to p
    q = &n2; // assigning the address of n2 to q

    cout << p << endl << q << endl;

    *p = 2;
    *q = 42; 

    cout << *p << ' ' << *q << endl;

    p=q;
    cout << *p << ' ' << *q << endl;*/

    //d1 = p; you cannont assign d1 to p because they are different datatypes


    return 0;
}