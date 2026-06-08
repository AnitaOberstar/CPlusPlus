
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


// Node structure for linked list
struct Node {
    string word;
    Node* next;
};

// Insert a new node at the end of the list
void insert(Node*& head, const string& w) {
    Node* newNode = new Node{ w, nullptr };

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Search for a word in the linked list
bool searchWord(Node* head, const string& target) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->word == target) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;
    string input;

    // Step 1: Get full string from user
    cout << "Enter a string: ";
    getline(cin, input);

    // Step 2: Split into words and insert into linked list
    stringstream ss(input);
    string word;

    while (ss >> word) {
        insert(head, word);
    }

    // Step 3: Ask user for a word to search
    string target;
    cout << "Enter a word to search: ";
    cin >> target;

    // Step 4: Search and output result
    if (searchWord(head, target)) {
        cout << "The word \"" << target << "\" WAS found in the string.\n";
    }
    else {
        cout << "The word \"" << target << "\" was NOT found in the string.\n";
    }

    return 0;
}

