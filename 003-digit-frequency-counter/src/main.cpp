#include <iostream>

int main(void)
{
    int SIZE = 10;
    int frequencies[SIZE];
    int i;
    std::string input;

    for (i = 0; i < SIZE; i++)
    {
        frequencies[i] = 0;
    }

    std::cin >> input;

    for (i = 0; i < input.length(); i++)
    {
        frequencies[input[i] - '0'] += 1;
    }

    std::cout << "\n";
    for (i = 0; i < SIZE; i++)
    {
        std::cout << "Digit " << i << ": " << frequencies[i] << std::endl;
    }
}