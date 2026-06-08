#include <iostream>
using namespace std;

// Define the structure of a node in the linked list
struct node {
    int data;
    node* next;
};

// Global head pointer (start of the list)
node* head = NULL;

// ---------------------------------------------------------
// Function 1: Insert a node at the end of the linked list
// ---------------------------------------------------------
void insertNode(int value) {
    node* new_node = new node;   // create a new node
    new_node->data = value;      // assign data
    new_node->next = NULL;       // next pointer is NULL

    if (head == NULL) {
        head = new_node;         // first node becomes the head
    }
    else {
        node* last = head;
        while (last->next != NULL) {
            last = last->next;   // move to the next node
        }
        last->next = new_node;   // attach new node at the end
    }
}

// ---------------------------------------------------------
// Function 2: Print all values in the linked list
// ---------------------------------------------------------
void print_Data_values() {
    // Start from the head of the list
    node* temp = head;

    // Check if the list is empty.
    // If true, print a message and return/exit.
    if (temp == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    // Traverse/go over the list and print each node's data
    cout << "Linked list values: ";
    while (temp != NULL) {
        cout << temp->data << " ";   // print the data of the current node
        temp = temp->next;           // move to the next node
    }

    cout << endl; // finish the line
}

// ---------------------------------------------------------
// Function 3: Delete a node by value
// ---------------------------------------------------------
// Function definition/body to delete a node from the linked list
void delete_a_node() {

    // Check if the list is empty
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;
    }

    // Ask the user for the value to delete
    int value;
    cout << "Enter the value you want to delete: ";
    cin >> value;

    // Traverse the list to find the node with the specified value
    node* current = head;
    node* previous = NULL;

    // Case 1: The node to delete is the head node
    if (current != NULL && current->data == value) {
        head = current->next;   // Move head to the next node
        delete current;         // Free memory
        cout << "Value " << value << " deleted successfully." << endl;
        return;
    }

    // Case 2: Search for the node in the rest of the list
    while (current != NULL && current->data != value) {
        previous = current;     // store the previous node
        current = current->next; // move to next node
    }

    // If the value is not found, display a message and return
    if (current == NULL) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    // Otherwise, bypass the node to delete
    previous->next = current->next;

    // Free the memory of the deleted node
    delete current;

    // Display a success message
    cout << "Value " << value << " deleted successfully." << endl;
}
// ---------------------------------------------------------
int main() {
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);

    print_Data_values();

    delete_a_node();
    print_Data_values();

    delete_a_node();
    print_Data_values();


    return 0;
}