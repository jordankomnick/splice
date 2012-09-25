#include "LinkedList.h"

LinkedList::LinkedList(){
	sentinel = new Node();
}

LinkedList::~LinkedList(){
	//TODO delete the other items, other than sentinel
	delete sentinel;
}

void LinkedList::pushFront(double new_data){
	Node* temp = new Node();
	temp->data = new_data;
	temp->next = sentinel->next;
	sentinel->next = temp;
}

double LinkedList::getData(void* handle){
	return ((Node*)handle)->data;
}