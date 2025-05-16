/* main.cpp
 *
 * Copyright 2025 Unknown
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char* argv[]) { // init the command argument system
    if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0) { // checks for the -h argument
            std::cout << "Syntax: \n" << std::endl;
            std::cout << "taxy [Tax amount without a %] [Annual income] \n" << std::endl;
            std::cout << "Eg. taxi 10 12000 \n" << std::endl;
        }
        if (strcmp(argv[1], "-i") == 0) { // starts interactive mode
            double taxAmount;
            double annualIncome; // inits the 2 doubles needed
            std::cout << "Specify tax percentage (without the % sign): ";
            std::cin >> taxAmount;
            std::cout << "Specify annual income: ";
            std::cin >> annualIncome;

            double result = (taxAmount / 100.0) * annualIncome;
            double left = annualIncome - result;

            std::cout << "You owe: " << result << std::endl;
            std::cout << "You are left with: " << left << std::endl; // prints final values
        } if (strcmp(argv[1], "-p") == 0) { // checks for the -p argument
            double taxAmount = std::stod(argv[2]);
            double annualIncome = std::stod(argv[3]); // init doubles

            double result = (taxAmount / 100.0) * annualIncome;
            double left = annualIncome - result;

            std::cout << "You owe: " << result << std::endl;
            std::cout << "You are left with: " << left << std::endl; // result
        }
    } else {
        std::cout << "No arguments given!\n"; // stops from no args
    }
    return EXIT_SUCCESS;
}
