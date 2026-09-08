#include <iostream>
#include <string>

using namespace std;

int main () {
    string tripletCodon;
    cout << "Enter the 3-letter codon: ";
    cin >> tripletCodon;

    if (tripletCodon == "ATG") {
        cout << "Role: Start Codon (Methionine)" << endl;
    } else if (tripletCodon == "TAA" || tripletCodon == "TAG" || tripletCodon == "TGA") {
        cout << "Role: Stop Codon" << endl;
    } else {
        cout << "Role: Standard Amino Acid Codon" << endl;
    }
    
    return 0;
}
