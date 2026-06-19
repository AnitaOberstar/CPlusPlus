#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

list<int> linkedList;   // STL list replaces manual node struct

// ---------------------------------------------------------
// Function 1: Insert a node at the end of the linked list
// ---------------------------------------------------------
void insertNode(int value) {
    linkedList.push_back(value);   // STL handles memory & linking
}

// ---------------------------------------------------------
// Function 2: Print all values in the linked list
// ---------------------------------------------------------
void print_Data_values() {
    if (linkedList.empty()) {
        cout << "The list is empty." << endl;
        return;
    }

    cout << "Linked list values: ";
    for (int value : linkedList) {
        cout << value << " ";
    }
    cout << endl;
}

// ---------------------------------------------------------
// Function 3: Delete a node by value
// ---------------------------------------------------------
void delete_a_node() {
    if (linkedList.empty()) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;
    }

    int value;
    cout << "Enter the value you want to delete: ";
    cin >> value;

    // find() returns an iterator to the value or end()
    auto it = find(linkedList.begin(), linkedList.end(), value);

    if (it == linkedList.end()) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    linkedList.erase(it);   // STL safely removes the node
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
