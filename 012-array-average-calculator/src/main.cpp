#include <iostream>

void analyzeArray(const int[], int);

int main(void)
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], N, i;

    do
    {
        std::cout << "N: "; std::cin >> N;
    }
    while (N < 1 || N > 100);

    for (i =  0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    analyzeArray(arr, N);
}

void analyzeArray(const int arr[], int n)
{
    double average;
    int maxVal, minVal, i;

    for (
        i = 0, maxVal = arr[0], minVal = arr[0], average = 0.0;
        i < n;
        average += (double) arr[i++] / n,
        maxVal = (i!=n && maxVal < arr[i]) ? arr[i] : maxVal,
        minVal = (i!=n && minVal > arr[i]) ? arr[i] : minVal
    );

    std::cout << "\n";
    std::cout << "Average: " << average << std::endl;
    std::cout << "Minimum: " << minVal << std::endl;
    std::cout << "Maximum: " << maxVal << std::endl;
}