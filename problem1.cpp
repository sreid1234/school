#include <iostream>

using namespace std;

int foo[15]; //declared an array of size 15

struct Node {
  int value
  int* thePointer = new int
};

//A[i] and A[i+1] collectively form a Node
void NodePair(int a[i]) 
{
  Node thisNode;

  thisNode.value(a[i]);
  thisNode.thePointer(a[i+1])  
}

//function to add values to the array
void addToArray(int x, int a[])
{
  while(a[i] < 16) {
    if (a[i].thePointer == NULL)
    {
      NodePair(x);
      a[i].thePointer = a[i+1].value;
    }
    else {
      a[i].thePointer = -1;
    }
    i++;
  }
}








Node::Node (int value, int pos)         //Default constructor
{
   int current = array[pos];
   int nodeValue = current;  
   this->head = *array[i + 1]; //need to give array index and not mem address
}

if *array[i + 1] < 16, set to nullptr

void Node::setData (int num[])
{
    head = num[0]
    head = *array[i + 1]
}

void printArray(int array[], int length)
{
	cout << "[";
	for(int pos=0; pos < length; pos++)
	{
		if(pos < length-1)
			cout << array[pos] << ", ";
		else
			cout << array[pos];
	}
	cout << "]" << endl;
}


int main (void) {

    int list[]; // create the list
	cout <<"Type 16 different numbers [-1 to quit]: ";
	cin >> data;
    
    //check for negative value
    if (data <= -1) {
        cout <<"This is invalid, please try again.";
        main(); //call main again 
    }
    //check for repeat value
    for (d = 0; d < 16; d++)
    { 
       for (m = d + 1; m < 16; m++) {
           if(arr[i] == arr[j])
           {
               cout << "Repeat values are not alllowed";
               main()
           }
       }
    }
        
        main()
    
	
	list.setData(data);		// first list: at front
	cin >> data;
    
}