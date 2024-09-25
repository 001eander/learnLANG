#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

namespace IO {
int read() {
  int x = 0, sgn = 1;
  char ch = getchar();
  for (; !isdigit(ch); ch = getchar())
    if (ch == '-') sgn = -1;
  for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
  return sgn * x;
}

void print(int n) {
  if (n > 10) print(n / 10);
  putchar(n % 10);
}

void print(int n, char end[]) {
  print(n);
  puts(end);
}

void println(int n) { print(n, "\n"); }
}  // namespace IO

int main() {
  int a = IO::read(), b = IO::read();
  if (a < b) {
    std::cout << 90 * a + 40 * (b - a) << std::endl;
  } else {
    std::cout << 90 * b + 60 * (a - b) << std::endl;
  }
  return 0;
}
