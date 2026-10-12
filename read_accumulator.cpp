#include <iostream>

using namespace std;

int main() {
    int totalReads = 3;
    int totalBases = 0; // The accumulator (starts at 0)

    for (int i = 1; i <= totalReads; i++) {
        int currentReadLength;
        cout << "Enter length for read #" << i << ": ";
        cin >> currentReadLength;

        totalBases = totalBases + currentReadLength; // Add to accumulator
        cout << "Running total so far: " << totalBases << " bases" << endl;
    }

    cout << "\nAll reads processed!" << endl;
    cout << "Grand Total Bases: " << totalBases << endl;

    return 0;
}