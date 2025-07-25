#include <iostream>

bool isBalanced(const std::string&);

int main(void)
{
    std::string brackets;

    std::cout << "Enter brackets: ";
    std::getline(std::cin, brackets);

    std::cout << (isBalanced(brackets) ? "YES" : "NO");
}

bool isBalanced(const std::string& str)
{
    int BRACKETS_SIZE = 6;
    char brackets[BRACKETS_SIZE] = {'(', ')', '[', ']', '{', '}'};
    int start, end, iter;

    for (start = 0, end = str.length()-1; start < end; start++, end--)
    {
        for (iter = 0; iter < BRACKETS_SIZE; iter++)
        {
            if (str[start] == brackets[iter])
            {
                if ((iter + 1) >= BRACKETS_SIZE || str[end] != brackets[iter+1])
                {
                    return false;
                }
            }
        }
    }

    return true;
}