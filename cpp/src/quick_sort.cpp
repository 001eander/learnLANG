#include <algorithm>
#include <iostream>

int main() {
  int arr[5] = {3, 1, 5, 4, 2};
  std::sort(arr, arr + 5);
  for (int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}