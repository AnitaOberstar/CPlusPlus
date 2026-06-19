#include <iostream>
#include <unordered_map>
#include <vector>
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
        freq[numbers[i]]++;
    }

    // Collect unique numbers
    vector<int> uniqueNums;
    for (auto &entry : freq) {
        uniqueNums.push_back(entry.first);
    }

    // ------------------------------------
    // Manual Bubble Sort (ascending order)
    // ------------------------------------
    int size = uniqueNums.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (uniqueNums[j] > uniqueNums[j + 1]) {
                int temp = uniqueNums[j];
                uniqueNums[j] = uniqueNums[j + 1];
                uniqueNums[j + 1] = temp;
            }
        }
    }

    cout << "\n\tFrequency of numbers:\n";
    for (int num : uniqueNums) {
        int count = freq[num];
        cout << "\t" << num << " appears " << count
             << " time" << (count == 1 ? "" : "s") << "\n";
    }

    return 0;
}