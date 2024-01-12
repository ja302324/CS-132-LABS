//----- List.cpp -----
#include <iostream>
using namespace std;

#include "linkedlist1.h"
//-- Definition of the class constructor
List::List()
	: first(0), mySize(0)
{ }

//-- Definition of the copy constructor
List::List(const List & origList)
{
	mySize = origList.mySize;
	first = 0;
	if (mySize == 0) return;
	NodePointer origPtr, lastPtr;
	first = new Node(origList.first->data); // copy first node
	lastPtr = first;
	origPtr = origList.first->next;
	while (origPtr != 0)
	{
		lastPtr->next = new Node(origPtr->data);
		origPtr = origPtr->next;
		lastPtr = lastPtr->next;
	}
}
//-- Definition of the destructor
inline List::~List()
{
	NodePointer prev = first,
		ptr;
	while (prev != 0)
	{
		ptr = prev->next;
		delete prev;
		prev = ptr;
	}
}

// Definition of empty()
bool List::empty()
{
	return mySize == 0;
}
//-- Definition of the assignment operator
const List & List::operator=(const List & rightSide)
{
	mySize = rightSide.mySize;
	first = 0;
	if (mySize == 0) return *this;
	if (this != &rightSide)
	{
		this->~List();
		NodePointer origPtr, lastPtr;
		first = new Node(rightSide.first->data); // copy first node
		lastPtr = first;
		origPtr = rightSide.first->next;
		while (origPtr != 0)
		{
			lastPtr->next = new Node(origPtr->data);
			origPtr = origPtr->next;
			lastPtr = lastPtr->next;
		}
	}
	return *this;
}

//-- Definition of insert()
void List::insert(ElementType dataVal, int index)
{
	if (index < 0 || index > mySize)
	{
		cerr << "Illegal location to insert -- " << index << endl;
		return;
	}
	mySize++;
	NodePointer newPtr = new Node(dataVal),
		predPtr = first;
	if (index == 0)
	{
		newPtr->next = first;
		first = newPtr;
	}
	else
	{
		for (int i = 1; i < index; i++)
			predPtr = predPtr->next;
		newPtr->next = predPtr->next;
		predPtr->next = newPtr;
	}
}
//-- Definition of erase()
void List::erase(int index)
{
	if (index < 0 || index >= mySize)
	{
		cerr << "Illegal location to delete -- " << index << endl;
		return;
	}
	mySize--;
	NodePointer ptr,
		predPtr = first;
	if (index == 0)
	{
		ptr = first;
		first = ptr->next;
		delete ptr;
	}
	else
	{
		for (int i = 1; i < index; i++)
			predPtr = predPtr->next;
		ptr = predPtr->next;
		predPtr->next = ptr->next;
		delete ptr;
	}
}


//-- Definition of display()
void List::display(ostream & out) const
{
	NodePointer ptr = first;
	while (ptr != 0)
	{
		out << ptr->data << " ";
		ptr = ptr->next;
	}
}

//-- Definition of the output operator
ostream & operator<<(ostream & out, const List & aList)
{
	aList.display(out);
	return out;
}

// definition of search
int List::search(ElementType through)
{
	NodePointer ptr = first;

	for(int pos = 0; pos < mySize; pos++)
	{	
		if(ptr->data == through)
			return pos;
		
		ptr = ptr->next;
	}
	return -1;
}

//Defintion of howMany
int List::howMany(ElementType get)
{
	NodePointer ptr = first;

	int counter = 0;
	
	for(int pos = 0; pos < mySize; pos++)
		{	if(ptr->data == get)
				counter++;
		    ptr = ptr->next;
		}
			
return counter;

}
