#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "BST.h"


using namespace std;

const int ENGLISH = 26; //number of letters in English alphabet


struct mys
{
    string w;
    int pos;
    int num;
};

bool operator<(mys lhs, mys rhs)
{
    if(lhs < rhs)
        return true;
    else
        return false;
}

void operator++(mys &mystruct)
{
    mystruct.num++;
}

ostream& operator<<(ostream& out, mys rhs)
{
    cout << rhs.w << endl;
    cout << rhs.pos << endl;
    cout << rhs.num << endl;
    return out;
}

istream& operator>>(istream& in, mys rhs)
{
    cin >> rhs.w;
    return in;
}

void processWord(string&);
void output(BST<mys> []);
void readFile(ifstream &, BST<mys> []);

int main()
{
    BST<mys> concordance[ENGLISH];
    mys s;

       // Prompt the user for the file name and read the file
       cout << "Enter the file name: ";
       string fileName;
       cin >> fileName;
       ifstream inFile(fileName);

       // Check if the file was successfully opened
    if (!inFile.is_open())
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

        readFile(inFile, concordance); //read and format
        output(concordance); //output

       // Prompt the user for words to search for
       cout << "Enter a word to search for (or 'done' to stop): ";
       while (cin >> s.w && s.w != "done")
       {
           // Determine which BST the word belongs to based on its first letter
           int index = toupper(s.w[0]);
           index = s.w[0] - 'A';

           // Search the BST for the word
           if (concordance[index].search(s))
           {
               cout << "Word found in concordance." << endl;
           }
           else
           {
               cout << "Word not found in concordance." << endl;
           }
       }
    
       inFile.close(); //close the file

       return 0;
}



void processWord(string& word)
{
    // Remove any non-alphabetic characters from the beginning or end of the word
    while (!isalpha(word[0]))
    {
        word.erase(0, 1);
    }

    while(!isalpha(word[word.length() - 1]))
    {
        word.erase(word.length() - 1, 1);
    }

}

void readFile(ifstream &inFile, BST<mys> concordance[])
{
   string dataIn;
    mys binsearch;
    char character;

   while (inFile >> dataIn)
   {
       // Remove any non-alphabetic characters from the beginning and end of the word
       // and convert the word to lowercase
       processWord(dataIn);
       character = toupper(dataIn[0]);
       binsearch.w = dataIn;
       binsearch.pos = 0;
       binsearch.num = 0;

       // Insert the word into the BST with its line number and count
       int spot = dataIn[0]-65;
       concordance[spot].insert(binsearch);
       
   }
}

//--- Definition of output()
void output(BST<mys> concordance[])
{
    for (int i = 0; i < ENGLISH; i++)
       {
           cout << "Concordance [" << char(65 + i) << "]" << ":\n\n";
           concordance[i].graph(cout);
       }
  
}
