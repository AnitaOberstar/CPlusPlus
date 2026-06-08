#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

// Define a few global integer values 
#define size 5     // Define the size of the stack
int stack[size];  // Declare the stack array
int top = -1;     // Initialize the top of the stack

// Function prototype for push
void push(int value);

int main() {
    // Example usage of the push function
    push(1);    // top++  = -1 +1 = location (0)
    push(2);    // top++  = 0 +1 = location (1)
    push(3);    // top++  = 1+1 = location (2)
    push(4);    // top++  = 2+1 = location (3)
    push(5);    // top++  = 3+1 = location (4)

    // Attempting to push another value (queue is full, overflow)
    // push(6);
    
    return 0;
}

// Function body or definition for push
void push(int value) {
    if (top == size - 1) {
        cout << "Stack Overflow! Cannot push " << value << ". Stack is full." << endl;
    } else {
        top++; // Increment top
        stack[top] = value; // Add the value to the stack or could be two steps in one stack [++ top];
        cout << "Pushed " << value << " to the stack." << endl;
    }
}
