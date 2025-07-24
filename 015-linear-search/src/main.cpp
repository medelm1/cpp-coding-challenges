#include <iostream>
#include <string>

int linearSeach(int[], int, int);

int main(void)
{
    const unsigned int MAX_SIZE = 100;
    int numbers[MAX_SIZE], target, n, index;

    do { std::cout << "Enter size: "; std::cin >> n; }
    while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        std::cout << "numbers[" << i << "]= "; std::cin >> numbers[i];
    }

    std::cout << "Enter target number: "; std::cin >> target;

    index = linearSeach(numbers, n, target);

    std::cout << "\n";
    std::cout << (index != -1 ? "Found at index: " + std::to_string(index) : "Not found") << std::endl;
}

int linearSeach(int arr[], int size, int target)
{
    int i, index;

    for (i = 0, index = -1; i < size; i++)
    {
        if (target == arr[i]) 
        {
            index = i;
            break;
        }
    }

    return index;
}