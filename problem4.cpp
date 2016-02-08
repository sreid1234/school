#include "Event.h"
#include "problem3.h"
#include <iostream>
#include <string>

using namespace std;

int main() {


	UnsortedType myList; 
	Event throwdown(12, "throwdown", 1);
	Event tutoring(14, "tutoring", 11);
	Event coffeebreak(15, "coffeebreak", 7);
	Event getMoney(23, "Pay Check", 12);
	Event birthday(20, "Cake", 9);
	Event graduation(16, "graduation", 5);

	myList.AddItem(throwdown);
	myList.AddItem(tutoring);
	myList.AddItem(coffeebreak);
	myList.AddItem(getMoney);
	myList.AddItem(birthday);
	myList.AddItem(graduation);


	return 0;

}