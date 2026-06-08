#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

// Define a few global integer values 
#define size 5     // Define the size of the queue
int queue[size];  // Declare the queue array
int front = -1, rear = -1;     // Initialise the front and rear of the queue

// Function prototype for enqueue
void enqueue(int value);

int main() {
    // Example usage of the  enqueue function
    enqueue(1); // rear++ = location (0)
    enqueue(2); // rear++ = location (1)   
    enqueue(3); // rear++ = location (2)
    enqueue(4); // rear++ = location (3)    
    enqueue(5); // rear++ = location (4)   

    // Attempting to enqueue another value (queue is full, overflow)
  //  enqueue(6); // rear++ = location 
    
    return 0;
}

void enqueue(int value) {
  // Check if the queue is full
  if (rear == size - 1) {  
   cout << "Queue Overflow! Cannot enqueue " << value << ". The queue is full." << endl;
    return; // Exit the function since no more elements can be added
  }

  // Check if the queue is empty (i.e., no elements have been added yet)
 if (front == -1 && rear == -1) 
  {  //// Yes, the queue is empty
    front = 0; // Set front to the first position
    rear = 0;  // Initialise rear to the first position as well
  } 
 else {  //// No, the queue is not empty but has space available
    rear++; // Move rear to the next position to accommodate the new element
  }

 queue[rear] = value; // Store the new value at the updated rear position
  cout << "Successfully enqueued " << value << " into the queue." << endl;
} // End of enqueue function
