#include "problem3.h"
#include "Event.h"
#include <string>
#include <iostream>

using namespace std; 

UnsortedType::UnsortedType() //default constructor
{
	length = 0;
	currentPos = -1;
	Event event(int time2, std::string name1, int date1);
}

void UnsortedType::AddItem(Event item)
{
	NodeType* location;

	location = new NodeType;
	location -> info = item;
	location -> next = listData;

	listData = location;

	length++;
}

Event UnsortedType::GetItem(Event item, bool&found)
{
	bool moreToSearch;
	NodeType* location;

	location = listData;
	found = false;
	moreToSearch = (location != NULL);

	while (moreToSearch && !found)
	{
		switch (item.compareToo(info[location]));
		{
			case 0 :
			case 1 : location = location ->next;
						moreToSearch = (location != NULL);
						break;
			case 2 : found = true;
						item = location->info;
						break;

		}
	}
	return item;
}


void UnsortedType::DeleteItem(Event item)
{
	NodeType* location = listData;
	NodeType* tempLocation;

	if (item == listData->info)
	{
		tempLocation = location;
		listData = listData->next;
	}
	else
	{
		while (!(item==(location->next)->info))
			location = location->next;

			tempLocation = location->next;
			location->next = (location->next)->next;
	}
	delete tempLocation;
	length --; 
}

