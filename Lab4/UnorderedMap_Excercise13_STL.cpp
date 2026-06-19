#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>   // for sort()
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    unordered_map<int, int> freq;  
    vector<int> numbers(N);

    cout << "Enter numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        freq[numbers[i]]++;   // STL hash map counts frequency
    }

    // Collect unique numbers
    vector<int> uniqueNums;
    uniqueNums.reserve(freq.size());
    for (const auto &entry : freq) {
        uniqueNums.push_back(entry.first);
    }

    // Sort using STL
    sort(uniqueNums.begin(), uniqueNums.end());

    cout << "\n\tFrequency of numbers:\n";
    for (int num : uniqueNums) {
        int count = freq[num];
        cout << "\t" << num << " appears " << count
             << " time" << (count == 1 ? "" : "s") << "\n";
    }

    return 0;
}