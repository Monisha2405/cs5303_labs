#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numReads;
    cout << "How many sequencing reads do you have? " << endl;
    cin >> numReads;

    double totalLength = 0.0;
    int readLength;

    for (int i = 1; i <= numReads; i++)
    {
        cout << "Enter the read length for the read # " << i << ":" << endl;
        cin >> readLength;
        
        totalLength = totalLength + readLength;
    }
    
    double average;

    average = totalLength / numReads;
    cout << fixed << setprecision (2);
    
    cout << "Total length for all reads: " << totalLength << endl;
    cout << "Average Read Length: " << average << " base pairs" << endl;
    return 0;
}