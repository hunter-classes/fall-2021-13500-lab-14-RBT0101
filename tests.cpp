#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "myvector.h"

TEST_CASE("Testing Simulated Vector Properties/Methods")
{
	//Default size is 5
	MyVector<int> vect1 = MyVector<int>();
	CHECK(vect1.size() == 5);
	
	vect1.push_back(50);
	CHECK(vect1[5] == 50);
	CHECK(vect1.size() == 6);
	CHECK(vect1.empty() == false);
	
	vect1.pop_back();
	CHECK(vect1[4] == 0);
	CHECK(vect1.size() == 5);
	
	vect1.clear();
	CHECK(vect1.empty() == true);
	
	//Test Two
	MyVector<std::string> vect2 = MyVector<std::string>();
	vect2.clear();
	CHECK(vect2.size() == 0);
	
	vect2.pop_back();
	CHECK(vect2.size() == 0);
	
	vect2.push_back("str");
	CHECK((vect2.size() == 1 && vect2[0] == "str"));
	
	vect2.push_back("swing");
	CHECK((vect2.size() == 2 && vect2[1] == "swing"));
	CHECK(vect2[0] == "str");
}




