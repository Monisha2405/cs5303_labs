#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int phredScore;

    cout << "Enter the Phred score (Q): ";
    cin >> phredScore;

    double errorProb = pow (10.0, -static_cast<double>(phredScore) / 10.0);
    
    cout << fixed << setprecision(5);
    if (phredScore >= 30) {
        cout << "Benchmark: Meets Clinical Grade Standard" << endl;
    } else if ((phredScore <= 20) && (phredScore < 30)) {
        cout << "Benchmark: Research Grade Only" << endl;
    } else if (phredScore < 20) {
        cout << "Benchmark: Rejected / Filter Out" << endl;
    } else {
        cout << "Status: INVALID INPUT (Quality score must be non-negative)" << endl;
    }
    
    cout << "Error probability = " << errorProb << endl;

    return 0;
}




    

