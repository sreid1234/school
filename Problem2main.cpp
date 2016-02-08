#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	compareT x, y;

	Event primetime(12, "primetime", 1);

	cout<<primetime.get_event() <<endl;

	Event superBowl(12, "The Super Bowl", 2);

	cout<<superBowl.get_event() <<endl;

	Event party(9, "Birthday Party", 6);

	cout<<party.get_event() <<endl;

	Event meeting(3, "Board Meeting", 9);

	cout<<meeting.get_event() <<endl;

	x = primetime.compareTo(primetime.get_date(), meeting.get_date());

	y = superBowl.compareTo(superBowl.get_date(), party.get_date());

	cout << x << y << endl;

	return 0;

}
