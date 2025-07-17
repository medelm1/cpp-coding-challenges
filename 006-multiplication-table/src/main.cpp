#include <iostream>

int main(void)
{
    int number, i;

    std::cin >> number;

    std::cout << "\n";
    for (i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
}