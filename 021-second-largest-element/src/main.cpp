#include <iostream>

int secondLarget(const int[], int);

int main(void)
{
    // Eneter size
    int n, i, isIdentical;
    do
    {
        std::cout << "Enter size: "; std::cin >> n;
    }
    while (n < 1 || n > 100);

    // Insert elements
    int arr[n];
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter " << i << "-th element: "; std::cin >> arr[i];
    }

    // check size and process elements
    if (n == 1)
    {
        std::cout << "No second largest element";
    }
    else if (n == 2)
    {
        if (arr[0] > arr[1]) std::cout << "Second largest element: " << arr[1];
        else if (arr[0] < arr[1]) std::cout << "Second largest element: " << arr[0];
        else std::cout << "No second largest element";
    }
    else
    {
        // check if all the elements are identical
        for (i = 0, isIdentical = true; i < n-1; i++)
        {
            if (arr[i] != arr[i+1])
            {
                isIdentical = false;
                break;
            }
        }

        if (isIdentical)
        {
            std::cout << "No second largest element";
        }
        else
        {
            std::cout << "Second largest element: " << secondLarget(arr, n);
        }
    }
}

int secondLarget(const int arr[], int n)
{
    int largest, secondLargest, i;

    for (i = 1, largest = arr[0]; i < n; i++)
    {
        if (largest < arr[i])
        {
            secondLargest = largest;
            largest = arr[i];
        }
    }

    return secondLargest;
}