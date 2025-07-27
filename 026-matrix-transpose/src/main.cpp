#include <iostream>

void printMatrix(int**, int, int);

int main(void)
{
    // matrix dimensions
    int M; do { std::cout << "Enter the number of rows: "; std::cin >> M; } while (M < 1 || M > 100);
    int N; do { std::cout << "Enter the number of columns: "; std::cin >> N; } while (N < 1 || N > 100);

    // allocate memory
    int **matrix = new int*[M];
    int **T = new int*[N];

    for (int i = 0; i < M; matrix[i++] = new int[N]);
    for (int i = 0; i < N; T[i++] = new int[M]);

    // initialize stuff
    for (int i = 0; i < M; ++i)
    {
        std::cout << "Enter elments of row " << i << ": " << std::endl;
        for (int j = 0; j < N; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    // transpose proccess
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; T[j][i] = matrix[i][j], j++);
    }

    // visualize result
    std::cout << "Original matrix:\n"; 
    printMatrix(matrix, M, N);

    std::cout << "Transposed matrix:\n"; 
    printMatrix(T, N, M);

    // deallocate memory
    for (int i = 0; i < M; delete[] matrix[i++]);
    for (int i = 0; i < N; delete[] T[i++]);
    
    delete[] matrix;
    delete[] T;
}

void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}