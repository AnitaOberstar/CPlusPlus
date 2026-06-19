#include <iostream>
#include <unordered_map>
#include <cstdint>
using namespace std;

// Define a structure to represent a student's record
struct StudentRecord
{
    string Name;
    uint64_t StudentID;
    double GPA;
    string Course;
};

int main()
{
    // Using unordered_map for fast lookups
    unordered_map<string, StudentRecord> unorderedStudentMap;

    // -------------------------------
    // SLIDE 46 — INSERTION METHODS
    // -------------------------------

    // 1. Subscript operator []  (creates or updates)
    unorderedStudentMap["Lisa"] = {"Lisa", 12345, 3.8, "Software Development"};
    unorderedStudentMap["Andrew"] = {"Andrew", 12346, 3.4, "Data Structure"};
    unorderedStudentMap["Nick"] = {"Nick", 12347, 3.9, "Software Engineering"};
    unorderedStudentMap["Lilia"] = {"Lilia", 12348, 3.7, "Computer Systems"};
    unorderedStudentMap["Idris"] = {"Idris", 12349, 3.6, "Advanced Software Development"};

    // 2. insert() — inserts ONLY if key does NOT exist
    unorderedStudentMap.insert({"Susan", {"Susan", 12350, 3.5, "Cyber Security"}});

    // 3. at() — modifies an existing key ONLY (throws exception if key missing)
    try {
        unorderedStudentMap.at("Lisa").GPA = 3.9;  // updating Lisa's GPA
    }
    catch (out_of_range &e) {
        cout << "Key not found when using at()." << endl;
    }

    // -------------------------------
    // SLIDE 44 — FINDING A STUDENT
    // -------------------------------
    auto it_unordered = unorderedStudentMap.find("Nick");

    if (it_unordered != unorderedStudentMap.end())
    {
        cout << "Found Nick in unordered map: GPA = "
             << it_unordered->second.GPA
             << ", Course = " << it_unordered->second.Course << endl;
    }

    // -------------------------------
    // SLIDE 47 — DELETION
    // -------------------------------
    cout << "\nDeleting Susan..." << endl;
    unorderedStudentMap.erase("Susan");   // erase by key

    // Confirm deletion
    if (unorderedStudentMap.find("Susan") == unorderedStudentMap.end()) {
        cout << "Susan successfully deleted from the map." << endl;
    }

    return 0;
}