#include <iostream>
#include <string>

using namespace std;

void printArray(int data[], int length);

int main () {



	int data [15];
	int i, j;

	cout<<"Type 16 different numbers [-1 to quit]: " << endl;
	for (i=0; i < 16; i += 2) {
		cout<<"Enter your first value ";
		cin>> j;
		data[i] = j;



	}

	

	printArray(data, 15);

	//cin>> data;
	//cout<<data;

	return -1;

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

