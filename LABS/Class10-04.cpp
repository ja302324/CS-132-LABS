#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr;
    char answer;
    bool done;


   while(!done)
{
    cout << "Enter the size: ";
    cin >> size;

    arr = new int[size];


    cout << "Enter" << size << " intergers: ";
    for(int pos = 0; pos < size; pos++)
    {
        cin >> arr[pos];
        cout << "Done(Y/N)";
        cin >> answer;
        if (answer == 'Y')
         done = true;
       
       delete [] arr;
    }
   }

    return 0;
}