#include <iostream>

void printRowSums(int**, int, int);

int main(void)
{
    int rows, cols;
    int i, j;

    // matrix dimensions
    do { std::cout << "Enter number of rows: "; std::cin >> rows; } while (rows < 1 || rows > 100);
    do { std::cout << "Enter number of cols: "; std::cin >> cols; } while (cols < 1 || cols > 100);

    // constructing & inserting matrix elements
    int** matrix = new int*[rows];
    
    for (i = 0; i < rows; matrix[i++] = new int[cols]);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            std::cout << "Enter element " << i << ", " << j << ": "; std::cin >> matrix[i][j];
        }
    }

    // printing row sums
    printRowSums(matrix, rows, cols);

    // Deallocate memory
    for (i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

void printRowSums(int** matrix, int rows, int cols)
{
    int i, j, sum;

    for (i = 0, sum = 0; i < rows; i++, sum = 0)
    {
        for (j = 0; j < cols; sum += matrix[i][j++]);

        std::cout << i << "-th row: " << sum << std::endl;
    }
}