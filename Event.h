#include <string>
#include <iostream>
#ifndef EVENT_h
#define EVENT_h

enum compareT {LESS, GREATER, EQUAL};
const int MAXITEMS = 5;


class Event
{

    public:
        //constructor
        Event(int time2, std::string name1, int date1);
        void change_Time(int time3);
        void change_Date(int date);
        void change_Name(std::string name);
        compareT compareTo(int a, int b);
        compareT compareToo(Event abc);
        std::string get_event() const;
        int get_date() const;
        void Initialize(int number);
    private:
        int time1;
        int date;
        int value;
        std::string name;
};

#endif
 
 

