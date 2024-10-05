#include <iostream>
int main() {
  int n, k;
  std::cin >> n >> k;
  k--;
  while (k--) {
    n /= 10;
  }
  std::cout << n % 10 << std::endl;
  return 0;
}
