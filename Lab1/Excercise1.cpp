#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

int main() {
    int x = 55;  	// Declare and initialize x to 55
    int c = 77;  	// Declare and initialize c to 77
    int *a;     		 // Declare a pointer to an integer
	
    a = &x;              // Assign the address of x to the pointer a
    cout << "x==>: " << x << " #a==>: " << *a << endl;  

    a = &c;      
    cout << "x==>: " << x << " *a==>: " << *a << " c==>: " << c << endl;   
    return 0;    // Return 0 to indicate successful execution
}
