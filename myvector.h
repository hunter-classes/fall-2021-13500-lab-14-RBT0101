#pragma once

template <class T> 
class MyVector{
public:
	MyVector();
	int size();
	int capacity();
	bool empty();
	void push_back(T item);
	void pop_back();
	void clear();
	T &operator[](int i){
		return arr[i];
	}
private:
	int arrSize;
	T* arr;
};

#include "myvector.cpp"


