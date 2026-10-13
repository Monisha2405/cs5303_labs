#include <iostream>

using namespace std;

int main() {
    int score;
    int passingCount = 0;
    int totalCount = 0;

    cout << "Enter Phred quality score (or type -1 to finish): ";
    cin >> score;

    while (score != -1) {
        totalCount = totalCount + 1;

        if (score >= 30) {
            passingCount = passingCount + 1;
        }

        cout << "Enter next score (or -1 to finish): ";
        cin >> score;
    }

    cout << "\n--- Processing Finished ---" << endl;
    cout << "Total scores evaluated: " << totalCount << endl;
    cout << "High quality (Q30+)    : " << passingCount << endl;

    return 0;
}