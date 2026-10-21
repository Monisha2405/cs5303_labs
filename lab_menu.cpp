#include <iostream>

using namespace std;

int main() {
    int choice;

    while (choice != 3) {

        cout << "--- Genomic Utility Menu ---\n";
        cout << "1. Check System Status\n";
        cout << "2. Display Active Pipeline\n";
        cout << "3. Exit Program\n";
        cout << "Enter selection (1-3):\n";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "System Status: All bio-containers healthy." << endl;
                break;
            case 2: 
                cout << "Active Pipeline: Nextflow RNA-seq v1.0" << endl;
                break;
            case 3:
                cout << "Exiting utility. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please enter 1, 2, or 3." << endl;
                break;
        }
    }

    return 0;
}