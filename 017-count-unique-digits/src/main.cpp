#include <iostream>
#include <cmath>

int countUniqueDigits(long int);

int main(void)
{
    long int n;
    do
    {
        std::cout << "Enter a positive integer: "; std::cin >> n;
    }
    while (n < 0 || n > pow(10, 9));

    std::cout << countUniqueDigits(n);
}

int countUniqueDigits(long int n)
{
    int size = 10, digits[size], temp, iter, sum;

    for (iter = 0; iter < size; digits[iter++] = 0);

    for (temp = n; temp != 0; temp /= 10)
    {
        for (iter = 0; iter < size; iter++)
        {
            if (digits[iter] == 0 && iter == temp % 10)
            {
                digits[iter] = 1;
            }
        }
    }

    for (iter = 0, sum = 0; iter < size; sum += digits[iter++]);

    return sum;
}