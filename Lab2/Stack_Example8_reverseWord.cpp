#include <iostream>
#include <string>
using namespace std;

#define SIZE 100   // Maximum stack size
char stackArr[SIZE];
int top = -1;

// Stack operations
void push(char c) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stackArr[++top] = c;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        return stackArr[top--];
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    // Push each character onto the stack
    for (char c : word) {
        push(c);
    }

    // Pop characters to reverse the word
    string reversed = "";
    while (top != -1) {
        reversed += pop();
    }

    cout << "Reversed word: " << reversed << endl;

    return 0;
}