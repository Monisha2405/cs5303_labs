#include <iostream>

using namespace std;

int main() {
    char base;
    char complement;

    cout << "Enter a single DNA base (A, T, C, or G): ";
    cin >> base;

    switch (base) {
        case 'A':
        case 'a':
            complement = 'T';
            break;
        case 'T':
        case 't':
            complement = 'A';
            break;
        case 'C':
        case 'c':
            complement = 'G';
            break;
        case 'G':
        case 'g':
            complement = 'C';
            break;
        default:
            complement = '?';
            break;
    }

    if (complement != '?') {
        cout << "Original: " << base << " -> Complement: " << complement << endl;
    } else {
        cout << "Error: '" << base << "' is not a valid DNA nucleotide base." << endl;
    }

    return 0;
}