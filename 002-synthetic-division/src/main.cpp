#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <stdlib.h>

std::pair<std::vector<int>, int> syntheticDivision(std::vector<int>, int);
std::string polynomialToString(std::vector<int>);

int main()
{
    int degree, divisor;

    // input degree
    do {
        std::cout << "Degree: ";
        std::cin >> degree;

    } while(degree < 1);

    std::vector<int> polynomial(degree+1);
    
    // input polynomial coefficients
    std::cout << "\nEnter polynomial coefficients from left to right" << std::endl;
    for (int n = 0; n <= degree; n++)
    {
        std::cout << "> ";
        std::cin >> polynomial[n];
    }

    // input divisor
    std::cout << "Enter divisor constant: ";
    std::cin >> divisor;

    // Perform synthetic division
    std::pair<std::vector<int>, int> result = syntheticDivision(polynomial, divisor);

    // Print results
    std::cout << std::endl;
    std::cout << "Result of Synthetic Division" << std::endl;
    std::cout << std::endl;
    std::cout << "Polynomial:\t" << polynomialToString(polynomial) << std::endl;
    std::cout << "Divisor:\t" << polynomialToString({1, -divisor}) << std::endl;
    std::cout << std::endl;
    std::cout << "Quotient:\t" << polynomialToString(result.first) << std::endl;
    std::cout << std::endl;
    std::cout << "Remainder:\t" << result.second << std::endl;

    return 0;
}

std::pair<std::vector<int>, int> syntheticDivision(std::vector<int> coefficients, int divisor)
{
    std::vector<int> quotient;
    int remainder, i;

    quotient.push_back(coefficients[0]);

    for (i = 1; i < coefficients.size()-1; i++)
    {
        quotient.push_back(divisor*quotient[i-1] + coefficients[i]);
    }

    remainder = divisor*quotient[i-1] + coefficients[i];

    return std::make_pair(quotient, remainder);
}

std::string polynomialToString(std::vector<int> coefficients)
{
    std::string polynomial;
    int degree;
    int i;

    degree = coefficients.size() - 1;

    for (i = 0; i <= degree; i++)
    {
        if (coefficients[i] < 0)
        {
            polynomial += " - ";
        }
        else if (coefficients[i] >= 0 && i != 0)
        {
            polynomial += " + ";
        }

        polynomial += std::to_string(abs(coefficients[i])) + "x^" + std::to_string(degree-i);
    }

    return polynomial;
}