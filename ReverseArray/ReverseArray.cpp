// To write a program that populates an array of integers, then calls a function that dynamically creates a new array containing the same values in reverse order and deallocate all dynmaically allocated memeory.
// Author: Jonathan Lopez

#include <iostream> // Include input and output.

using namespace std; // using std namespace.

// PROTOTYPES
int* ReverseArray(const int arr[], int size);
void print(int *reversedArray, int size);

int main() {

	const int arraySize = 10; // delcare size of the array to pass to parameters.

	int myArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Array to be reversed.
	


	// FUNCTION CALLS
	int *reversedArray = ReverseArray(myArray, arraySize); // function call1, create a new array on the heap.
	print(reversedArray, arraySize); // function call2

	
	delete[] reversedArray; // delete it from memory.
	cout << "\n\n> Reversed array deleted from heap.\n"; // notify user that the array has been de-allocated from mermory.
	
}

int* ReverseArray(const int arr[], int size) { // Reverse the array. Parameters: take in the array itself as well as the size of the array.
	
	int* reversed = new int[size];

	cout << "> Successfully added array to the heap\n\n"; // output when the new array has been added.

	for (int i = 0; i < size; i++) {
		reversed[i] = arr[size - 1 - i]; // reverse the array. subtract one to properly index from 0. subtract indexing variable to display backwards.
	}
	cout << "> Array reversed on heap\n\n";

	return reversed;
}

void print(int *reversedArray, int size) { // Print the output to the console window. Parameters: take the parameters of the array and the size of the array.
	cout << " [ ";
	for (int i = 0; i < size; i++) { // print out the array, call each element of the array individually using a for loop.
		cout << reversedArray[i] << " ";
	}
	cout << " ]";
}