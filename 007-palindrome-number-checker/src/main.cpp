#include <iostream>

bool isPalindrome(int n);

int main(void)
{
    int n;

    // Validation
    do {
        std::cin >> n;
    }
    while (n < 0);

    // Check the number and print the result
    if (isPalindrome(n))
    {
        std::cout << "Palindrome" << std::endl;
    }
    else
    {
        std::cout << "Not a palindrome" << std::endl;
    }
}

bool isPalindrome(int n)
{
    int tmp, reversed;

    tmp = n;
    reversed = 0;

    do
    {
        reversed = reversed*10 + (tmp % 10);
        tmp /= 10;
    } 
    while (tmp != 0);

    return reversed == n;
}