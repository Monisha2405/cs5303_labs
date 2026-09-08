#include <iostream>
#include <string>

int main() {
    std::string readID;
    double meanQualityScore;

    std::cout << "Enter Sequencing Read ID: ";
    std::cin >> readID;

    std::cout << "Enter Mean Phred Quality Score (0 to 40): ";
    std::cin >> meanQualityScore;

    std::cout << "\nAnalysis for Read [" << readID << "]:" << std::endl;

    if (meanQualityScore >= 30.0) {
        std::cout << "Status: PASS (High Quality - 99.9% base accuracy)" << std::endl;
    } else if (meanQualityScore >= 20.0 && meanQualityScore < 30.0) {
        std::cout << "Status: WARNING (Moderate Quality - 99.0% base accuracy)" << std::endl;
    } else if (meanQualityScore >= 0.0 && meanQualityScore < 20.0) {
        std::cout << "Status: FAIL (Low Quality - High sequencing error rate)" << std::endl;
    } else {
        std::cout << "Status: INVALID INPUT (Quality score must be non-negative)" << std::endl;
    }

    return 0;
}
