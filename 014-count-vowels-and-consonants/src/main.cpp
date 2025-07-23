#include <iostream>

void countLetters(const std::string&, int&, int&);

int main(void)
{
    std::string str;
    int vowels, consonants;

    std::getline(std::cin, str);

    countLetters(str, vowels, consonants);

    std::cout << "\n";
    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
}

void countLetters(const std::string& s, int& vowelsCount, int& consonantsCount)
{
    unsigned int VOWELS_SIZE = 5, CONSONANTS_SIZE = 21;
    char vowels[VOWELS_SIZE] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[CONSONANTS_SIZE] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    int i;

    vowelsCount = 0;
    consonantsCount = 0;

    for (char ch : s)
    {
        if (isalpha(ch))
        {
            for (i = 0; i < VOWELS_SIZE; i++)
            {
                if (tolower(ch) == vowels[i]) vowelsCount++;
            }

            for (i = 0; i < CONSONANTS_SIZE; i++)
            {
                if (tolower(ch) == consonants[i]) consonantsCount++;
            }
        }
    }
}