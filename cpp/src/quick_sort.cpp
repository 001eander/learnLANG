#include <iostream>

void quickSort(int arr[], int length);

int main()
{
    int arr[5] = {3, 1, 5, 4, 2};
    quickSort(arr, 5);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void quickSort(int arr[], int length)
{
    if (length <= 1) return;
    int i = 1, j = length - 1;
    while (i < j) {
        while (arr[i] < arr[0] && i < j) i++;
        while (arr[j] > arr[0] && i < j) j--;
        std::swap(arr[i], arr[j]);
    }
    std::swap(arr[0], arr[i]);
    quickSort(arr, i - 1);
    quickSort(arr + i + 1, length - i);
}
