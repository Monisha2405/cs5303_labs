#include <iostream>

using namespace std;

// 1. Define our custom function ABOVE main
int doubleValue(int originalNumber) {
    int doubled = originalNumber * 2;
    return doubled;
}

int main() {
    int inputBases = 150;

    // 2. Call the function
    int result = doubleValue(inputBases);

    cout << "Original bases: " << inputBases << endl;
    cout << "Doubled bases : " << result << endl;

    return 0;
}