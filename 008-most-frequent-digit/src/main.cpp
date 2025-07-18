#include <iostream>
#include <utility>

std::pair<int, int> mostFrequentDigit(long);

int main(void)
{
    long n;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> n;

        if (n < 0) std::cout << "Error: invalid integer\n\n";
    }
    while (n < 0);
    
    std::pair result = mostFrequentDigit(n);

    std::cout << "Most frequent digit: " << result.first << " (frequency: " << result.second << ")" << std::endl;
}

std::pair<int, int> mostFrequentDigit(long n)
{
    const int SIZE = 10;
    long temp;
    int frequencies[SIZE], i, mostFrequentDigit;

    // initialization
    for (i = 0; i < SIZE; frequencies[i++] = 0);

    // count digits
    for (temp = n; temp != 0; frequencies[temp % 10] += 1, temp /= 10);

    // get most frequent digit
    for (i = 1, mostFrequentDigit = 0; i < SIZE; i++)
    {
        if (frequencies[mostFrequentDigit] < frequencies[i])
        {
            mostFrequentDigit = i;
        }
    }

    // return the most frequent digit & its frequency
    return std::make_pair(mostFrequentDigit, frequencies[mostFrequentDigit]);
}