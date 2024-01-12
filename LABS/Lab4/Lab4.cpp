#include <iostream>
#include <fstream>

using namespace std;

#include "item.h"
#include "DList.h"

void storeItem(ifstream& in, List& lOperation, itemType i, int& iPos);
void Menu(List& listOperation, ofstream& out, int itemPos);

int main()
{
    ifstream in;       // input file stream
    ofstream out;      // output file stream
    string fPath;       // file path
    itemType item;      // an item of struct type
    List listOperation; // a list of class type that can manipulate the item type
    int itemPos = 0;    // the item position
    
    cout << "Enter the file path of the input file: ";
    getline(cin, fPath);

    in.open(fPath);               // open the input file
    

    while(!in)
    {
        cout << "Invalid file Path, try again: ";
        getline(cin, fPath);
        in.open(fPath); // open the input file
    }
    
    //Read and store the data in InventoryFile.txt
    storeItem(in, listOperation, item, itemPos);
    
    //Pompt Memu to user
    Menu(listOperation, out, itemPos);
    
    in.close(); // close file
    
    return 0;


}
void storeItem(ifstream& in, List& lOperation, itemType i, int& iPos)
{
    while(in >> i)
    {
        lOperation.insert(i, iPos);
        iPos++;
    }
}

void Menu(List& listOperation, ofstream& out, int itemPos)
{
    int choice; // choice number
    
    do
    {
        cout << "Your options are:\n"
             << "    1: Check if the item list is empty.\n"
             << "    2: Insert a value into the list at a given position.\n"
             << "    3: Remove a value from the list at a given position.\n"
             << "    4: Display a list.\n"
             << "    5: Exit\n";
        cout << "\nWhich choice? ";
        cin >> choice; // read in a choice number
        
        
        int chosenPos; // Choose Position by the user
        switch (choice)
        {
            case 1:
                if (listOperation.empty())
                    cout << "Item list is empty.\n\n";
                else
                    cout << "Item list is NOT empty\n\n";
                break;
            case 2:
                cout << "You chose to insert an item, insert position: ";
                if (cin >> chosenPos)
                {
                     
                    // When valid actual Index, then read in the inserted item.
                    itemType insertItem; // temporary item for insertion
                    cin >> insertItem;
                    listOperation.insert(insertItem, chosenPos);
                }
                break;
            case 3:
                cout << "You chose to remove an item, which position: ";
                
                if(cin >> chosenPos)// the position user enter
                {
                    chosenPos--; // the position in the struct array
                    listOperation.erase(chosenPos); // Erase an item
                    cout << endl;
                }
                break;
            case 4:
                listOperation.display(out);
                break;
            default:
                break;
        }
    }while (choice != 5); // exit the do-while Menu

    cout << "You chose to EXIT, program terminated successfully!\n\n";
}