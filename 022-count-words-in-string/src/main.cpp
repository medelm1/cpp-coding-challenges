#include <iostream>

int countWords(const std::string&);
std::string trim(const std::string&);

int main(void)
{
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Number of words: " << countWords(sentence);
}

std::string trim(const std::string& str)
{
    int start, end;

    // find the index of the first non-whitespace character
    for (start = 0; str[start] == ' ' && start < str.length(); start++);

    // find the index of the last non-whitespace character
    for (end = str.length()-1; str[end] == ' ' && end >= 0; end--);

    return str.substr(start, end - start + 1);
}

int countWords(const std::string& str)
{
    std::string trimedStr;
    int i, counter;

    trimedStr = trim(str);

    for (i = 0, counter = 0; i < (str.length() - 1); i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
        {
            counter++;
        }
    }

    return counter + 1;
}