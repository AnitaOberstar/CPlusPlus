#include <iostream>
#include <vector>
#include <algorithm>   // for sort()
#include <numeric>     // for accumulate()
using namespace std;

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    vector<int> scores(N);

    // Input scores
    cout << "Enter " << N << " scores:\n";
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    // Sort using STL of Algorithm
    sort(scores.begin(), scores.end());

    // Display sorted scores
    cout << "\nSorted scores: ";
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;

    // Lowest and highest
    int lowest = scores.front();
    int highest = scores.back();

    cout << "Lowest score: " << lowest << endl;
    cout << "Highest score: " << highest << endl;

    // Compute average using STL accumulate 
    double sum = accumulate(scores.begin(), scores.end(), 0);
    double average = sum / N;

    cout << "Average score: " << average << endl;

    return 0;
}