#include <iostream>
#include <vector>
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

	// sorting
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // swap manually
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

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

    // Compute average
    double sum = 0;
    for (int s : scores) {
        sum += s;
    }
    double average = sum / N;

    cout << "Average score: " << average << endl;

    return 0;
}