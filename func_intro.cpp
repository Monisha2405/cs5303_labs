#include <iostream>

using namespace std;

// Define a function that accepts an integer and returns twice its value.
int doubleValue(int originalNumber) {
    int doubled = originalNumber * 2; // Multiply the input by two.
    return doubled;                   // Send the doubled value back to the caller.
}

int main() {
    int inputBases = 150; // Number to pass to the function.

    // Call the function and save the returned value.
    int result = doubleValue(inputBases);

    // Print the original value and its doubled result.
    cout << "Original bases: " << inputBases << endl;
    cout << "Doubled bases : " << result << endl;

    return 0; // End the program successfully.
}