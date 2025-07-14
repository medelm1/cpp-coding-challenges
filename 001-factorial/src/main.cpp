#include <iostream>

int factorialRecursive(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorialRecursive(n-1);
}

int factorialIterative(int n)
{
    int i, prod;

    for (i = n, prod = 1; i >= 1; i--)
    {
        prod *= i;
    }

    return prod;
}

int main()
{
    int npt;

    do
    {
        std::cout << "\nInput: ";
        std::cin >> npt;

        if (npt < 0)
        {
            std::cout << "Error: factorial is undefined for negative numbers." << std::endl;
        }

    } while (npt < 0);

    std::cout << factorialIterative(npt) << std::endl;

    return 0;
}