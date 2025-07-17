#include <iostream>

int main(void)
{
    int number, sum;
    do
    {
        std::cin >> number;
    } while (number <= 0);

    sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "\nSum of digits: " << sum << std::endl;
}