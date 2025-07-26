#include <iostream>

int GCD_iterative(int, int);
int GCD_recursive(int, int);

int main(void)
{
    int num1, num2;

    do { std::cout << "Enter first number: "; std::cin >> num1; } while (num1 <= 0);
    do { std::cout << "Enter second number: "; std::cin >> num2; } while (num2 <= 0);

    std::cout << "\n";
    std::cout << "GCD(" << num1 << ", " << num2 << ")= " << GCD_recursive(num1, num2);
}

int GCD_recursive(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return GCD_recursive(b, a % b);
}

int GCD_iterative(int a, int b)
{
    int remainder;

    do
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    while (remainder != 0);

    return a;
}