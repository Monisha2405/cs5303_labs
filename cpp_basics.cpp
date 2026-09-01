#include <iostream>
#include <string>

int main() {
    // Variable declarations
    std::string sampleName;
    int readCount;
    double gcContent;

    // Prompt user for input (std::getline allows spaces!)
    std::cout << "Enter sequence sample name: ";
    std::getline(std::cin, sampleName);

    std::cout << "Enter total read count: ";
    std::cin >> readCount;

    std::cout << "Enter GC content percentage (e.g., 52.5): ";
    std::cin >> gcContent;

    // Display formatted summary output
    std::cout << "\n--- Sample Summary ---" << std::endl;
    std::cout << "Sample ID : " << sampleName << std::endl;
    std::cout << "Reads     : " << readCount << std::endl;
    std::cout << "GC Content: " << gcContent << "%" << std::endl;

    return 0;
}