#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "example.txt";
    std::string line;

    // Write to file
    std::ofstream outfile(filename);
    if (!outfile) {
        std::cerr << "Error opening file for writing!\n";
        return 1;
    }
    outfile << "Hello, this is a test!" << std::endl;
    outfile << "This is line 2 of the file." << std::endl;
    outfile.close();

    // Read from file
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error opening file for reading!\n";
        return 1;
    }
    std::cout << "Contents of " << filename << ":\n";
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();

    // Append to file
    std::ofstream appendfile(filename, std::ios::app);
    if (!appendfile) {
        std::cerr << "Error opening file for appending!\n";
        return 1;
    }
    appendfile << "Appending new line to the file." << std::endl;
    appendfile.close();

    // Read again to show appended content
    infile.open(filename);
    if (!infile) {
        std::cerr << "Error opening file again for reading!\n";
        return 1;
    }
    std::cout << "\nContents of " << filename << " after appending:\n";
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();

    return 0;
}
