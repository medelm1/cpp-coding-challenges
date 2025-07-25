#include <iostream>

bool isPalindrome(const std::string&);
std::string longestPalindromPrefix(const std::string&);

int main(void)
{
    std::string str;

    std::cout << "Enter you string: ";
    std::getline(std::cin, str);

    std::cout << "\n";
    std::cout << longestPalindromPrefix(str);
}

bool isPalindrome(const std::string& str)
{
    int start, end;

    for (start = 0, end = (str.length() - 1); start < end; start++, end--)
    {
        if (str[start] != str[end])
        {
            return false;
        }
    }

    return true;
}

std::string longestPalindromPrefix(const std::string& str)
{
    int iter;
    std::string longestPalindrom, substr;

    for (
        iter = 1, substr = str.substr(0, iter), longestPalindrom = str[0]; 
        iter < str.length(); 
        substr = str.substr(0, ++iter)
    )
    {
        if (isPalindrome(substr))
        {
            longestPalindrom = substr;
        }
    }

    return longestPalindrom;
}