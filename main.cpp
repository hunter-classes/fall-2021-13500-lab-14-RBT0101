#include <iostream>
#include "myvector.h"

int main(){
	MyVector<int> vect1 = MyVector<int>();
	std::cout << "Initializing vector with a default size of 5" << std::endl;
	std::cout << "Checking actual size: " << vect1.size() << std::endl;
	
	std::cout << "Pushed number '50' to the end of vector and increase size by one" << std::endl;
	vect1.push_back(50);
	
	std::cout << "The last number of this vector is: " << vect1[5] << std::endl;
	std::cout << "Current size of this vector is: " << vect1.size() << std::endl;
	std::cout << "Is the current vector empty (0 = no, 1 = yes)?     " << vect1.empty() << std::endl;
	
	std::cout << "Remove last element of this vector and decrease size by one" << vect1.empty() << std::endl;
	vect1.pop_back();
	
	std::cout << "The last element of the vector is: " << vect1[4] << std::endl;
	std::cout << "The current size of the vector is: " << vect1.size() << std::endl;
	
	std::cout << "Clearing vector contents..." << std::endl;
	vect1.clear();
	
	std::cout << "Is vector empty (0 = no, 1 = yes)?     " << vect1.empty() << std::endl;
	return 0;
}	
