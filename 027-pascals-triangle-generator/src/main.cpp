#include <iostream>

void PascalTriangle(int);

int main(void)
{
    int N; do { std::cout << "Enter the number of rows: "; std::cin >> N; } while (N < 1 || N > 100);

    PascalTriangle(N);
}

void PascalTriangle(int n)
{
    int i, j;
    int **t = new int*[n]; for (i = 0; i < n; t[i] = new int[n], i++);

    // init
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; t[i][j] = 0, j++);
    }

    // calculations
    for (i = 1, t[0][0] = 1; i < n; i++)
    {
        for (
            j = 1, t[i][0] = 1; 
            j < i + 1; 
            t[i][j] = t[i-1][j] + t[i-1][j-1], j++
        );
    }

    // print
    for (i = 0; i < n; ++i, std::cout << "\n")
    {
        for (j = 0; j < i+1; std::cout << t[i][j] << "\t", ++j);
    }

    // deallocate memory
    for (i = 0; i < n; delete[] t[i], i++);
    delete[] t;
}