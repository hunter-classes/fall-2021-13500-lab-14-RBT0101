main: main.o
	g++ -std=c++11 -o main main.o
	
tests: tests.o 
	g++ -std=c++11 -o tests tests.o 

tests.o: tests.cpp myvector.h myvector.cpp doctest.h
	g++ -std=c++11 -c tests.cpp
	
main.o: main.cpp myvector.h myvector.cpp
	g++ -std=c++11 -c main.cpp
	
clean:
	rm -f tests.o main.o myvector.o
	
