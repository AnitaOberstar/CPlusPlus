#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

list<int> linkedList;

// Function prototypes
void insertNode(int value);
void print_Data_values();
void delete_a_node(int value);

int main() {
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);

    print_Data_values();

    delete_a_node(1);
    delete_a_node(15);

    print_Data_values();
    return 0;
}

void insertNode(int value) {
    linkedList.push_back(value);
}

void print_Data_values() {
    if (linkedList.empty()) {
        cout << "This list is empty, head = Null\n";
        return;
    }

    cout << "head -> ";
    for (int value : linkedList) {
        cout << value << " -> ";
    }
    cout << "Null\n";
}

void delete_a_node(int value) {
    auto it = find(linkedList.begin(), linkedList.end(), value);

    if (it != linkedList.end()) {
        linkedList.erase(it);
        cout << "Node with value " << value << " deleted.\n";
    } else {
        cout << "Error: Value " << value << " not found in the list.\n";
    }
}