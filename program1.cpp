/*
 * Course: CS 5303 - Computer Science I
 * Assignment: Program 1
 * Author: Monisha
 * Description: Calculates basic sequence coverage statistics and total sequence yield.
 */

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string genomeName;
    double genomeSizeMb;
    double totalReads;
    double readLength;

    // Output header
    std::cout << "==========================================" << std::endl;
    std::cout << "     CS 5303 - Program 1 Calculator      " << std::endl;
    std::cout << "==========================================" << std::endl;

    // Gather inputs
    std::cout << "Enter organism/genome name: ";
    std::getline(std::cin, genomeName);

    std::cout << "Enter genome size (in Megabases, e.g., 4.6): ";
    std::cin >> genomeSizeMb;

    std::cout << "Enter total number of sequencing reads: ";
    std::cin >> totalReads;

    std::cout << "Enter average read length (in base pairs): ";
    std::cin >> readLength;

    // Mathematical calculations
    double totalBases = totalReads * readLength;
    double genomeSizeBytes = genomeSizeMb * 1000000.0;
    double coverageDepth = totalBases / genomeSizeBytes;

    // Output results formatted to 2 decimal places
    std::cout << "\n---------------- RESULTS ----------------" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Genome Target : " << genomeName << std::endl;
    std::cout << "Total Yield   : " << totalBases << " base pairs" << std::endl;
    std::cout << "Fold Coverage : " << coverageDepth << "x" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    return 0;
}