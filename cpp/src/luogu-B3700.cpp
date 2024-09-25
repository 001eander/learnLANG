#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

int pow(int b, int i) {
  if (i == 0) return 1;
  if (i % 2 == 0) {
    int tmp = pow(b, i / 2);
    return tmp * tmp;
  }
  return b * pow(b, i - 1);
}

int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      printf("%d ^ %d = %d ", i, j, pow(i, j));
    }
    puts("");
  }
  return 0;
}