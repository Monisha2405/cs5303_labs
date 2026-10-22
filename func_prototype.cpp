#include <iostream>

using namespace std;

// ==========================================
// 1. FUNCTION PROTOTYPE (The One-Line Promise)
// ==========================================
int multiplyBases(int reads, int length);

// ==========================================
// 2. MAIN FUNCTION (Stays clean at the top)
// ==========================================
int main() {
    int myReads = 10;
    int myLength = 150;

    // Calling our function:
    int total = multiplyBases(myReads, myLength);

    cout << "Total sequenced bases: " << total << endl;

    return 0;
}

// ==========================================
// 3. FULL FUNCTION DEFINITION (The actual work)
// ==========================================
int multiplyBases(int reads, int length) {
    int result = reads * length;
    return result; // Sends the answer back to main
}