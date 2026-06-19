#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s) {
    cout << "Stack (top -> bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

     // Push elements onto the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    display(st);  // Display the stack

    // Peek at the top element
    cout << "Top element (peek): " << st.top() << endl;

    // Pop two elements from the stack
    st.pop();
    st.pop();

    display(st);     // Display the stack after popping

    return 0;
}
