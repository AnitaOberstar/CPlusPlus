#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

#define size 5     // Define the size of the queue
int queue[size];  // Declare the queue array
int front = -1;   // Initialise the front of the queue
int rear = -1;    // Initialise the rear of the queue

// Function prototypes
void enqueue(int value);
void dequeue();
int peek();
void display();

int main() {
    // Example usage of the enqueue function
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    enqueue(6); // Attempting to enqueue another value (queue overflow)
    display();  // Display the queue

    // Peek at the front element
    cout << "Front element (peek): " << peek() << endl;

    dequeue(); // Dequeue the front element from the queue
    dequeue(); // Dequeue the front element from the queue
    display(); // Display the queue after dequeuing

    return 0;
}

// Function definition for enqueue
void enqueue(int value) {
    if (rear == size - 1) {
        cout << "Queue Overflow! Cannot enqueue " << value << endl;
    } else {
        if (front == -1) front = 0; // First element
        queue[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }
}

// Function definition for dequeue
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Nothing to dequeue." << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }
}

// Function definition for peek
int peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty. No front element." << endl;
        return -1;
    } else {
        return queue[front];
    }
}

// Function definition for display
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}