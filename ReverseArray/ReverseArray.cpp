// To write a program that populates an array of integers, then calls a function that dynamically creates a new array containing the same values in reverse order and deallocate all dynmaically allocated memeory.
// Author: Jonathan Lopez

#include <iostream> // Include input and output.

using namespace std; // using std namespace.

// PROTOTYPES
int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

int main() {

	int arraySize = 10; // delcare size of the array to pass to parameters.

	int myArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Array to be reversed.
	


	// FUNCTION CALLS
	int *reversedArray = ReverseArray(myArray, 10); // function call1, create a new array on the heap.
	print(myArray, arraySize); // function call2




	
}

int* ReverseArray(const int arr[], int size) { // Reverse the array. Parameters: take in the array itself as well as the size of the array.
	for (int i = 0; i < ) {

	}
}

void print(const int arr[], int size) { // Print the output to the console window. Parameters: take the parameters of the array and the size of the array.

}