#include "LinkedList.h"

LinkedList::LinkedList(){
	sentinel = new Node();
}

LinkedList::~LinkedList(){
	//TODO delete the other items, other than sentinel
	delete sentinel;
}