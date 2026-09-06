#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string sampleName;
    int A, T, G, C;

    std::cout << "Enter the sample ID: ";
    std::getline(std::cin, sampleName);

    std::cout << "Enter the counts for A: ";
    std::cin >> A;
    std::cout << "Enter the counts for T: ";
    std::cin >> T;
    std::cout << "Enter the counts for G: ";
    std::cin >> G;
    std::cout << "Enter the counts for C: ";
    std::cin >> C;

    int totalBases = A + T + G + C;
    double GCpercentage = (static_cast<double>(G + C) / totalBases) * 100.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "sampleID : " << sampleName << std::endl;
    std::cout << "Total Bases   : " << totalBases << " base pairs" << std::endl;
    std::cout << "GC Percentage   : " << GCpercentage << std::endl;

return 0;
}   









