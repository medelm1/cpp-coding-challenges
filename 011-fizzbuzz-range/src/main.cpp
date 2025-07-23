#include <iostream>

void fizzBuzz(int);

int main(void)
{
    int N;
    
    std::cout << "Enter an integer: "; std::cin >> N;

    fizzBuzz(N);
}

void fizzBuzz(int n)
{
    int i;
    bool divisibleBy3, divisibleBy5;

    for (i = 1; i <= n; i++)
    {
        divisibleBy3 = i % 3 == 0;
        divisibleBy5 = i % 5 == 0;

        if (!divisibleBy3 && !divisibleBy5)
        {
            std::cout << i;
        }
        else
        {
            std::cout << (divisibleBy3 ? "Fizz" : "");
            std::cout << (divisibleBy5 ? "Buzz" : "");
        }
        std::cout << "\n";
    }
}