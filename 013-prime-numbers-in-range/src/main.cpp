#include <iostream>
#include <cmath>

bool isPrime(int);

int main(void)
{
    const unsigned int MAX_SIZE = 10000;
    int primes[MAX_SIZE], L, R, primesCount, j;

    do { std::cout << "Enter left range: "; std::cin >> L; } while (L < 0);

    do { std::cout << "Enter right range: "; std::cin >> R; } while (R < L || R > MAX_SIZE);

    for (primesCount = 0, j = L; j <= R; j++) if (isPrime(j)) primes[primesCount++] = j;

    if (primesCount != 0)
    {
        for (j = 0; j < primesCount; j++) std::cout << primes[j] << std::endl;
    }
    else 
        std::cout << "No primes in range";
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}