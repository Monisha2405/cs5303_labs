#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::cout << std::left << std::setw(15) << "Feature" 
              << std::right << std::setw(12) << "Count" 
              << std::setw(15) << "Percentage" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    std::cout << std::left << std::setw(15) << "Exons" 
              << std::right << std::setw(12) << 2450 
              << std::fixed << std::setprecision(1) << std::setw(14) << 12.4 << "%" << std::endl;

    std::cout << std::left << std::setw(15) << "Introns" 
              << std::right << std::setw(12) << 18320 
              << std::fixed << std::setprecision(1) << std::setw(14) << 87.6 << "%" << std::endl;

    return 0;
}