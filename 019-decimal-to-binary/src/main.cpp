#include <iostream>
#include <cmath>

std::string _decimalToBinary(int);

int main(void)
{
    unsigned int n;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> n;
    }
    while (n < 0 || n > pow(10, 9));

    std::cout << "\n";
    std::cout << _decimalToBinary(n);
}

std::string _decimalToBinary(int n)
{
    int quotient, remainder, start, end;
    char temp;
    std::string binary;

    quotient = n;

    do
    {
        remainder = (quotient % 2);
        quotient /= 2; 
    
        binary += std::to_string(remainder);
    }
    while (quotient != 0);

    // reverse the binary string
    for (start = 0, end = (binary.length() - 1); start < end; start++, end--)
    {
        temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
    }

    return binary;
}