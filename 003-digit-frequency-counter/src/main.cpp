#include <iostream>

int main(void)
{
    int SIZE = 10;
    int frequencies[SIZE];
    int i;
    std::string input;

    // Init frequencies
    for (i = 0; i < SIZE; i++)
    {
        frequencies[i] = 0;
    }

    // Get number
    std::cin >> input;

    // Calculate each digit frequency
    for (i = 0; i < input.length(); i++)
    {
        frequencies[input[i] - '0'] += 1;
    }

    // Display result
    std::cout << "\n";
    for (i = 0; i < SIZE; i++)
    {
        std::cout << "Digit " << i << ": " << frequencies[i] << std::endl;
    }
}