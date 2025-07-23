#include <iostream>

bool areAnagrams(const std::string&, const std::string&);

int main(void)
{
    std::string stmt1, stmt2;

    std::cout << "Enter first statement: "; std::cin >> stmt1;
    std::cout << "Enter second statement: "; std::cin >> stmt2;

    std::cout << "\n" << (areAnagrams(stmt1, stmt2) ? "Anagram" : "Not an anagram") << std::endl;
}

bool areAnagrams(const std::string& str1, const std::string& str2)
{
    const int SIZE = 25;
    int frequencies[25], i, frequencies_sum;

    // init frequencies
    for (i = 0; i < SIZE; frequencies[i++] = 0);

    // count letters in first string
    for (i = 0; i < str1.length(); i++)
    {
        int idx = tolower(str1[i]) - 'a';
        
        if (idx >= 0 && idx < SIZE)
        {
            frequencies[idx] += 1;
        }
    }

    // count letters in second string
    for (i = 0; i < str2.length(); i++)
    {
        int idx = tolower(str2[i]) - 'a';
        
        if (idx >= 0 && idx < SIZE)
        {
            frequencies[idx] -= 1;
        }
    }

    // check if all frequencies are 0
    for (int frequency : frequencies)
    {
        if (frequency != 0) { return false; }
    }

    return true;
}