#include <iostream>

using namespace std;

int main () {
    char aaCode;

    cout << "Enetr a single-letter amino acid code: ";
    cin >> aaCode;

    switch (aaCode)  {
        case 'K': 
        case 'R': 
        case 'H':
        case 'k': 
        case 'r': 
        case 'h':
            cout << "Charge: Positively Charged (Basic)" << endl;
            break;
        case 'D':
        case 'E':
        case 'd':
        case 'e':
            cout << "Charge: Negatively Charged (Acidic)" << endl;
            break;
        case 'A':
        case 'V':
        case 'L':
        case 'a':
        case 'v':
        case 'l':
            cout << "Charge: Nonpolar / Hydrophobic" << endl;
            break;
        default:
            cout << "Charge: Other / Unclassified" << endl;
            break;
    }
        return 0;
}