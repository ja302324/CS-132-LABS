//----- List.h -----
#ifndef LINKEDLIST
#define LINKEDLIST
#include <iostream>
using namespace std;

typedef int ElementType;
class List
{
private:
	class Node
	{
	public:
		ElementType data;
		Node * next;
		
		Node()
			: next(0)
			{ }
		
		Node(ElementType dataValue)
			: data(dataValue), next(0)
			{ }
	}; //--- end of Node class

	typedef Node * NodePointer;

public:
	//------ List OPERATIONS
	List();
	List(const List & origList);
	~List();
	const List & operator=(const List & rightSide);
	bool empty();
	void insert(ElementType dataVal, int index);
	void erase(int index);
	void display(ostream & out) const;
	int search(ElementType through);
	int howMany(ElementType a);
		
private:
	//------ DATA MEMBERS
	NodePointer first ;
	int mySize;
}; //--- end of List class

ostream & operator<<(ostream & out, const List & aList);
//istream & operator>>(istream & in, List & aList);
#endif