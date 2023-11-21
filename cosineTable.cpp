// Created by: Finn Kitor
// Created on: November 21st, 2023
// this program generates a loop for the cosine table between 0 to 360 degrees.
#include <cmath>
#include <iostream>
#include <map>

std::map<int, double> generateCosineTable() {
    std::map<int, double> cosine_table;

    for (int degree = 0; degree <= 360; degree++) {
        try {
            // Calculating the cosine value for the current degree
            double cosine_value = cos(degree * M_PI / 180);

            // Adding the degree and its corresponding cosine value to the table
            cosine_table[degree] = cosine_value;
        } catch (const std::exception &e) {
            std::cerr << "Error occurred while calculating cosine for degree " << degree << ": " << e.what() << std::endl;
        }
    }

    return cosine_table;
}

int main() {
    std::map<int, double> cosine_table = generateCosineTable();

    // Printing the cosine table
    for (auto const &entry : cosine_table) {
        std::cout << "Cosine of " << entry.first << " degrees: " << entry.second << std::endl;
    }

    return 0;
}
