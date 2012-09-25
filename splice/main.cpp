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
//ends up being linear time because of the for loop
/*
int indexOf(double* h){
	for(int i = 0; i < arr_len; i++)
	{
		if(arr + i == h)
		{
			return i;
		}
	}
	return -1;
}*/

//a better solution, constant time
int indexOf(double* h)
{
	//get # bytes between h and arr pointers
	int offset = (char*)h - (char*)arr;
	//divide by size of a double
	int index = offset/sizeof(double);

	//make sure index is positive, less than the length of arr, and an even multiple of a double
	if(index < 0 || index >= arr_len || (offset % sizeof(double)) != 0)
	{
		return -1;
	}
	return index;
}

int main(){
	arr_len = 500;
	arr = new double[arr_len];
	double test;

	//should return 15 because we entered arr[15]
	cout << indexOf(&arr[15]) << endl;
	//should return -1 when accessing out of bounds
	cout << indexOf(&arr[1500]) << endl;
	//shoud return -1 when accessing something not in the array
	cout << indexOf(&test) << endl;
	//moves you 1 byte down instead of 8 bytes, throwing everything off, should return -1
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