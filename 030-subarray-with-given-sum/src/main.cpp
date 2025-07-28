#include <iostream>
#include <climits>

int getInt(const std::string&, int, int);

int main(void)
{
    int i, SUM, start, end, found;

    int N = getInt("Enter array size: ", 1, 100);
    int arr[N];

    std::cout << "Enter array elements:\n"; for (i = 0; i < N; std::cin >> arr[i], i++);
    
    int S = getInt("Enter target sum: ", INT_MIN, INT_MAX);

    for (start = 0, found = false; start < N-1 && !found; start++)
    {
        for (end = start+1, SUM = arr[start]; end < N-1 && SUM < S; SUM += arr[end], end++);

        if (SUM == S) 
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        std::cout << "Subarray found from index " << start << " to " << end-1;
    }
    else
    {
        std::cout << "Not found";
    }

}

int getInt(const std::string& prompt, int min, int max)
{
    int input;

    do
    {
        std::cout << "Enter array size: "; 
        std::cin >> input;
    }
    while (input < min || input > max);

    return input;
}