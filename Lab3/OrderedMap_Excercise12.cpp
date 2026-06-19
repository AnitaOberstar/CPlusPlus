#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    map<string, int> students;  // name → score

    // Input student names and scores
    cout << "Enter each student's name and score:\n";
    for (int i = 0; i < N; i++) {
        string name;
        int score;
        cin >> name >> score;
        students[name] = score;  // map automatically sorts by name
    }

    // Display all students in sorted order
    cout << "\nStudents (sorted by name):\n";
    for (const auto &entry : students) {
        cout << entry.first << " : " << entry.second << endl;
    }

    // Search for a student
    cout << "\nEnter a name to search for: ";
    string searchName;
    cin >> searchName;

    if (students.find(searchName) != students.end()) {
        cout << "Score for " << searchName << ": " 
             << students[searchName] << endl;
    } else {
        cout << "Student not found.\n";
    }

    return 0;
}