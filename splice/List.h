#pragma once
#define NULL 0

class List{
public:
	/**
	 * Take all items starting with the item AFTER a,
	 * up to and including b, remove from current
	 * place in list, and insert AFTER t.
	 **/
	virtual void splice(void* a, void* b, void* t)=0;

	/**
	 * return a handle to the ith item of the list.
	 */
	virtual void* at(int i)=0;

	/**
	 * Given a handle, return the associated data
	 * Note: This is an unsafe function. It is up
	 * to the client to ensure that the handle is
	 * valid.
	 **/
	virtual double getData(void* handle)=0;

	/**
	 * Inserts the new data item into the list after t
	 **/
	virtual void addAfter(double new_data, void* t)=0;

	/**
	 * Inserts a new data item at the front of the list
	 **/
	virtual void pushFront(double new_data)=0;
};