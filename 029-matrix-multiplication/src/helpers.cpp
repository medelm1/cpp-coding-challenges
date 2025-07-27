#include "helpers.hpp"

int getInt(const std::string& prompt, int min, int max)
{
    int input;

    do
    {
        std::cout << prompt;
        std::cin >> input;
    }
    while (input < min || input > max);

    return input;
}

void printMatrix(int** mat, int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; std::cout << '\n', i++)
    {
        for (j = 0; j < cols; std::cout << mat[i][j] << '\t', j++);
    }
}