#include <iostream>
#include "myvector.h"

template <typename T>
MyVector<T>:: MyVector(){
	this->arrSize = 5;
	this->arr = new T[this->arrSize];
};

template <typename T>
int MyVector<T>:: size(){
	return this->arrSize;
}

template <typename T>
int MyVector<T>:: capacity(){
	return this->arrSize * 2;
}

template <typename T>
bool MyVector<T>:: empty(){
	return (this->arrSize  == 0);
}

template <typename T>
void MyVector<T>:: push_back(T item){
	this->arrSize++;
	T* newVector = new T[this->arrSize];
	for (int i=0; i<this->arrSize-1; i++){
		newVector[i] = this->arr[i];
	}
	
	newVector[this->arrSize-1] = item;
	delete [] this->arr;
	
	this->arr = newVector;
}

template <typename T>
void MyVector<T>:: pop_back(){
	if (!this->empty()){
		this->arrSize--;
	}
}

template <typename T>
void MyVector<T>:: clear(){
	delete [] this->arr;
	this->arrSize = 0;
	this->arr = new T[arrSize];
}


