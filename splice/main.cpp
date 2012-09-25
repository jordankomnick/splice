#include <iostream>
#include "LinkedList.h"
#include "ArrayList.h"

using namespace std;

double* arr;
int arr_len;

/**
 * If h is an element of the array arr, then
 * return its index. If not, return -1. So
 * indexOf(arr+2) should return 2...
 **/
int indexOf(double* h){

}

int main(){
	arr_len = 500;
	arr = new double[arr_len];
	double test;

	cout << indexOf(&arr[15]) << endl;
	cout << indexOf(&arr[1500]) << endl;
	cout << indexOf(&test) << endl;
	cout << indexOf(  (double*)(((char*)arr)+1)  ) << endl;

	/*
	List* l = new LinkedList();

	l->pushFront(1.0);
	l->pushFront(2.0);
	l->pushFront(3.0);

	cout << "[";
	for(int i=0; l->at(i) != NULL; i++){
		if(i != 0) {
			cout << ", ";
		}
		cout << l->getData(l->at(i));
	}
	cout << "]" << endl;
	*/
	return 0;
}