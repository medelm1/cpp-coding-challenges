#include <iostream>

int main(void)
{
    int number, sum;

    // Get user number
    do
    {
        std::cin >> number;
    } while (number <= 0);

    // Calculate the sum
    sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    // Display results
    std::cout << "\nSum of digits: " << sum << std::endl;
}