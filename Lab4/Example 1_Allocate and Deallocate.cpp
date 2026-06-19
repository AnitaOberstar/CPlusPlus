#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

int main() {
    // Allocate memory for three integers using 'new'
    int *ptr1 = new int; // ptr1 points to a dynamically allocated integer
    int *ptr2 = new int; // ptr2 points to a dynamically allocated integer
    int *ptr3 = new int; // ptr3 points to a dynamically allocated integer

	// Get input from the user
    cout << "Enter the first  number: ";  // Prompt the user for the first number
    cin >> *ptr1;  // Read the first number from the user and store it in the memory pointed to by ptr1

    cout << "Enter the second number: ";  // Prompt the user for the second number
    cin >> *ptr2;  // Read the first number from the user and store it in the memory pointed to by ptr2

    cout << "Enter the third  number: ";  // Prompt the user for the third number
    cin >> *ptr3;  // Read the first number from the user and store it in the memory pointed to by ptr3
	
	 // Calculate the average
    double average = (static_cast<double>(*ptr1) + *ptr2 + *ptr3) / 3.0; //  static_cast<double> ensures floating-point division

    // Print the average
    cout << "The average is: " << average << endl; // Print the calculated average to the console
	
	// If you are thinking, that you don't need to use these pointers any more, then deallocate the memory using 'delete'
    delete ptr1; // Deallocate the memory pointed to by ptr1
    delete ptr2; // Deallocate the memory pointed to by ptr2
    delete ptr3; // Deallocate the memory pointed to by ptr3

    return 0; // Indicate successful program execution
}
