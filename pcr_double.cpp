#include <iostream>

using namespace std;

int main () {
    int dnaCount = 1;
    int totalCycles;

    cout << "Enter number of PCR cycles to simulate: ";
    cin >> totalCycles;
    
    for (int cycle = 1; cycle <= totalCycles; cycle++) {
        dnaCount = dnaCount * 2;
        cout << "Running cycle number: " << cycle << endl;
        cout << "Current number of molecules: " << dnaCount << endl;
    }

    return 0;
}