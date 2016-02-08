#include <string>
#include <iostream>
#include "Event.h"
#ifndef PROBLEM3_h
#define PROBLEM3_h



struct NodeType {
	Event info(int time2, std::string name1, int date1);
	NodeType *next;
};

class UnsortedType {
public:
	UnsortedType();
	bool isFull() const;
	int GetLength() const;
	Event GetLength(Event item, bool& found);
	void AddItem(Event item);
	Event GetItem(Event item, bool&found);
	void DeleteItem(Event item);
	void ResetList();
	Event GetNextItem();
private: 
	NodeType* listData;
	int length;
	NodeType* currentPos;
	Event info[MAXITEMS];
};

#endif