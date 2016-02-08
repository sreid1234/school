#include <string>

using namespace std;

void printArray(int data[], int length);

int main () {



	int data [16];
	int i, j, k, temp, currentIndex = 0;

	cout<<"Type 16 different numbers [-1 to quit]: " << endl;
	for (i=0; i < 8; i += 1) {
		cout<<"Enter your first value ";
		cin>> j;
		data[currentIndex] = j;
		cout<<"Enter your index ";
		temp = currentIndex; 
		cin>> currentIndex;
		data[temp + 1] = currentIndex;
	}


	

	printArray(data, 16);

	//cin>> data;
	//cout<<data;

	return -1;

}

void printArray(int array[], int length)
	{
	cout << "[";
	int currentPos = 1;
	while (array[currentPos] != -1) {
		cout<<array[currentPos-1]<<",";
		currentPos = array[currentPos] +1;
		
	}
	cout << array[currentPos-1] << "]" << endl;
}



