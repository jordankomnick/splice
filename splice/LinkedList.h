#include "List.h"

class Node {
	Node* next;
	double data;
};

class LinkedList : public List{
public:
	/**
	 * Take all items starting with the item AFTER a,
	 * up to and including b, remove from current
	 * place in list, and insert AFTER t.
	 **/
	virtual void splice(void* a, void* b, void* t);

	/**
	 * return a handle to the ith item of the list.
	 */
	virtual void* at(int i);

	/**
	 * Inserts the new data item into the list after t
	 **/
	virtual void addAfter(double new_data, void* t);
	
	/**
	 * Inserts a new data item at the front of the list
	 **/
	virtual void pushFront(double new_data);
	
	LinkedList();
	~LinkedList();

private:
	Node* sentinel;
};