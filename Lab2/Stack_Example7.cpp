#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

#define size 5     // Define the size of the stack
int stack[size];  // Declare the stack array
int top = -1;     // Initialize the top of the stack

void push(int value);  
void pop();         
int peek();            
void display();     

int main() {
    // Example usage of the push function
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    push(6); // Attempting to push another value (stack overflow)
    display();  // Display the stack

    // Peek at the top element
    cout << "Top element (peek): " << peek() << endl;

    pop(); 
    pop(); 
    display(); // Display the stack after popping

    return 0;
}

// Function definition for push
void push(int value) {
    if (top == size - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        top++;
        stack[top] = value;
        cout << "Pushed: " << value << endl;
    }
}

// Function definition for pop
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop." << endl;
    } else {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }
}

// Function definition for peek
int peek() {
    if (top == -1) {
        cout << "Stack is empty. No top element." << endl;
        return -1; // Return a sentinel value
    } else {
        return stack[top];
    }
}

// Function definition for display
void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}