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

void* LinkedList::at(int i){
	Node* cur = sentinel->next;
	while(cur != sentinel && i != 0){
		cur = cur->next;
		i--;
	}
	if(i != 0) {
		return NULL;
	} else {
		return cur;
	}
}

void LinkedList::splice(void* a, void* b, void* t){
	//TODO fill in stub
}

void LinkedList::addAfter(double new_data, void* t){
	//TODO fill in stub
}