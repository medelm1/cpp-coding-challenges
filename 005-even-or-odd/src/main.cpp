#include <iostream>

int main(void)
{
    int number;

    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << "Even";
    }
    else
    {
        std::cout << "Odd";
    }
}