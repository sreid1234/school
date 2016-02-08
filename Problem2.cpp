#include "Event.h"
#include <string>
#include <iostream>

using namespace std;


Event::Event(int time2, std::string name1, int date1) 
{
    time1 = time2;
    name = name1;
    date = date1;
    value = 0;
        
}
 
void Event::change_Time(int time3) 
{
    time1 = time3;
}

void Event::change_Date(int date2) 
{
    date = date2;
}
 
void Event::change_Name(std::string name2) 
{
    name = name2;
}
 
compareT Event::compareTo(int a, int b)
{
    compareT compare;
    if (a > b) {
        compare = GREATER;
    }
    else if (a == b) {
        compare = EQUAL;
    }
    else if (a < b) {
        compare = LESS;
    }
    return compare;
}

compareT Event::compareToo(Event abc) {

    compareT compare;
    if (value < abc.value)
        compare = LESS;
    else if (value > abc.value)
        compare = GREATER;
    else 
        compare = EQUAL;
    return compare;


}
 
//get functions (normally declared const)
std::string Event::get_event() const
{
	return name;
}

int Event::get_date() const
{
    return date;
}

void Event::Initialize(int number)
{
    value = number;
}


/*
void Event::compareTo(int a, int b)
{
    if (a > b) 
        cout << "This first date is later in the year." <<endl;
    if (a == b)
        cout << "These two events have the same date." <<endl;
    if (a < b)
        cout << "The second event is later in the year." <<endl;
}
*/