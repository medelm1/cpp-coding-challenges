#include <iostream>

std::string runLengthEncoding(const std::string&);

int main(void)
{
    std::string str;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, str);

    std::cout << "\n";
    std::cout << "RLE: ";
    std::cout << runLengthEncoding(str);
}

std::string runLengthEncoding(const std::string& str)
{
    int i, j, counter;
    std::string compressedStr;

    for (i = 0; i < str.length();)
    {
        for (j = i, counter = 1; j < str.length() && std::tolower(str[i]) == std::tolower(str[j+1]); j++, counter++);

        compressedStr += str[i] + std::to_string(counter);

        i = j+1;
    }

    return compressedStr;
}