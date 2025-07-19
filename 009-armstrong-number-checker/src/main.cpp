#include <iostream>
#include <cmath>

bool isArmstrong(int);

int main(void)
{
    int n;

    do {
        std::cout << "Enter a positive integer: ";
        std::cin >> n;

    } while (n < 0);

    std::cout << (isArmstrong(n) ? "Armstrong" : "Not an Armstrong number") << std::endl;
}

bool isArmstrong(int n)
{
    int temp, sum, numberOfDigits;

    for (
        temp = n, numberOfDigits = 0; 
        temp != 0; 
        numberOfDigits++, temp /= 10
    );
    for (
        temp = n, sum = 0; 
        temp != 0; 
        sum += pow((temp % 10), numberOfDigits), temp /= 10
    );

    return sum == n;
}