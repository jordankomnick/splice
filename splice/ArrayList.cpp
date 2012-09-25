#include "ArrayList.h"

ArrayList::ArrayList(){
	arr_len = 500;
	num_items = 0;
	arr = new double[arr_len];
	first_item = 0;
}

ArrayList::~ArrayList(){
	delete arr;
}

void* ArrayList::at(int i){
	if(i < num_items){
		return arr+i;
	} else {
		return NULL;
	}
}

double ArrayList::getData(void* handle){
	return *(double*)handle;
}

void ArrayList::pushFront(double new_data){
	//TODO handle the error condition somehow
	if(num_items >= arr_len) return;

	for(int i=num_items; i>0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = new_data;
	num_items++;
}

void ArrayList::splice(void* a, void* b, void* t){
	//TODO fill in stub
}

void ArrayList::addAfter(double new_data, void* t){
	//TODO fill in stub
}