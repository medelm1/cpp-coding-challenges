#include <iostream>

void reverseArray(int[], int);

int main(void)
{
    int iter, n;
    do {
        std::cout << "Size: "; std::cin >> n;
    }
    while (n < 1 || n > 100);

    int arr[n];
    for (iter = 0; iter < n; iter++)
    {
        std::cout << iter << "-th element: "; std::cin >> arr[iter];
    }

    reverseArray(arr, n);

    // print revsersed array
    for (iter = 0; iter < n; iter++)
    {
        std::cout << arr[iter] << '\t';
    }
}

void reverseArray(int arr[], int n)
{
    int start, end, temp;

    for (start = 0, end = n-1; start < end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}