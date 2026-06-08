#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

// Function to swap two values using pointers
void change(int *i, int *j) {
    int temp = *i;  // Store the value pointed by i in a temporary variable
    *i = *j;            // Assign the value pointed by j to the location pointed by i
    *j = temp;      // Assign the temporary value to the location pointed by j
}
int main() {
    int value_1, value_2, value_3;  // Declare three integer variables to hold input data

    // Prompt the user to enter three data items
    cout << "Arrange three data integers in ascending order\n";
    cout << "*********************\n";
    cout << "Type three data integers ==> : ";
    cin >> value_1 >> value_2 >> value_3;  // Take input from the user

    // Compare and swap the values to arrange them in ascending order
    if (value_1 > value_2) 
        change(&value_1, &value_2);  // If value_1 is greater than value_2, swap them
    if (value_2 > value_3) 
        change(&value_2, &value_3);  // If value_2 is greater than value_3, swap them
    if (value_1 > value_2) 
        change(&value_1, &value_2); // Check again to ensure value_1 and value_2 are in order
    // Display the sorted data
    cout << "Data in ascending order: " << value_1 << " " << value_2 << " " << value_3 << "\n";
    return 0; // Return 0 to indicate successful execution
}
