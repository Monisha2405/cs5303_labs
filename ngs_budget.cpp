#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string organismName;
    double genomeSizeMb;
    double coverageDepth;
    double costperMillion;

    cout << "Enter the organism name";
    getline (cin, organismName);

    cout << "Enter the target genome size (Mb)";
    cin >> genomeSizeMb;

    cout << "Enter the fold-coverage depth";
    cin >> coverageDepth;

    cout << "Enter the cost per million bases";
    cin >> costperMillion;

    double totalBases = genomeSizeMb * 1000000.0 * coverageDepth;
    double totalCost = (totalBases * costperMillion) / 1000000.0;

    cout << fixed << setprecision(2);
    cout << "Orgsnism name: " << organismName << endl;
    cout << "The total bases is: " << totalBases << "base pairs" << endl;
    cout << "The total cost is: " << totalCost << endl;

    return 0;
}    

