#include <iostream>
#include <stdexcept>

#include "helpers.hpp"

int** matrixMultiplication(int**, int, int, int**, int, int);

int main(void)
{
    int i, j;

    int rowsA; rowsA = getInt("Enter rows for Matrix A: ", 1, 100);
    int colsA; colsA = getInt("Enter columns for Matrix A: ", 1, 100);

    std::cout << '\n';

    int rowsB; rowsB = getInt("Enter rows for Matrix B: ", 1, 100);
    int colsB; colsB = getInt("Enter columns for Matrix B: ", 1, 100);

    int **matA = new int*[rowsA]; for (i = 0; i < rowsA; matA[i] = new int[colsA], i++);
    int **matB = new int*[rowsB]; for (i = 0; i < rowsB; matB[i] = new int[colsB], i++);
    int **matC = nullptr;

    // insert values
    std::cout << "Enter elements for Matrix A:\n";
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsA; matA[i][j] = getInt("Enter an int: ", -100, 100), j++);
    }
    std::cout << "Enter elements for Matrix B:\n";
    for (i = 0; i < rowsB; i++)
    {
        for (j = 0; j < colsB; matB[i][j] = getInt("Enter an int: ", -100, 100), j++);
    }

    // run the multiplication operation
    matC = matrixMultiplication(matA, rowsA, colsA, matB, rowsB, colsB);

    // print the result
    printMatrix(matC, rowsA, colsB);

    // deallocate memory
    for (i = 0; i < rowsA; delete[] matA[i], i++);
    delete[] matA;

    for (i = 0; i < rowsB; delete[] matB[i], i++);
    delete[] matB;

    for (i = 0; i < rowsA; delete[] matC[i], i++);
    delete[] matC;
}

int** matrixMultiplication(int** matA, int rowsA, int colsA, int** matB, int rowsB, int colsB)
{
    if (colsA != rowsB) 
    {
        throw std::invalid_argument("Multiplication not possible");
    }

    int i, j, k;

    // allocate new 2D array
    int **matC = new int*[rowsA]; for (i = 0; i < rowsA; matC[i] = new int[colsB], i++);

    // calculations
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0, matC[i][j] = 0; j < colsA; matC[i][j] += (matA[i][j] * matB[j][i]), j++);
    }

    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            for (k = 0, matC[i][j] = 0; k < colsA; matC[i][j] += (matA[i][k] * matB[k][j]), k++);
        }
    }

    return matC;
}