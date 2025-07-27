#include <iostream>
#include <cctype>

std::string compress(const std::string&);

int main(void)
{
    std::string str;
    bool valid;

    // insert string to compress
    do
    {
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);

        // validate string
        valid = true;
        for (int i = 0; i < str.length(); i++)
        {
            if (!isalpha(str[i]) || isupper(str[i]))
            {
                valid = false;
                break;
            }
        }

    } while (!valid);

    // compress and display result
    std::cout << "\n";
    std::cout << "Compressed string: " << compress(str);
}

std::string compress(const std::string& str)
{
    std::string compressed;

    int i, j, count;

    for (i = 0; i < str.length();)
    {
        for (j = i, count = 1; j < str.length() && std::tolower(str[i]) == std::tolower(str[j+1]); j++, count++);

        compressed += str[i] + std::to_string(count);

        i = j+1;
    }

    return compressed.length() < str.length() ? compressed : str;
}