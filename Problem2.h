class AddEvent{
 protected:
 int time;
 int date;
 string name;

 public:
 void set_Time(time);
 void set_Date(date);
 void set_Name(name);
 void set_Notification(int hours);
 enum compareTo(date, otherDate)
 struct get_event() const;
 };
 
 
 AddEvent::AddEvent(time, name) 
 {
     struct theEvent {
         int time;
         int date;
         string name;
     } 
 }
 
 void AddEvent::set_time(time) {
     eventTime = time;
 }
 
 void AddEvent::set_Name(name) {
     eventName = name;
 }
 
 void AddEvent::set_Notfication(Bool) {
     if Bool == True
     turn notifcations on
 }
 
 enum AddEvent::compareTo(date, otherDate)
 {
     if date > otherDate 
        return GREATER
     if date == otherDate
        return EQUAL
     if date < otherDate
        return LESS
 }
 
//get functions (normally declared const)
struct AddEvent::get_event() const
{
	return theEvent;
}
