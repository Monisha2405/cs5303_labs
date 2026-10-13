# include <iostream>

using namespace std;

int main() {

    int readLength;

    cout << "Enter read length (or -1 to finish): ";
    cin >> readLength;

    int readCount = 0;
    int totalBases = 0;

    while (readLength != -1) {
        readCount = readCount + 1;

        totalBases = totalBases + readLength;

        cout << "Enter read length (or -1 to finish): ";
        cin >> readLength;
    }

    cout << "Total count of reads entered: " << readCount << endl;
    cout << "Total combined bases: " << totalBases << endl;

    return 0;
}
