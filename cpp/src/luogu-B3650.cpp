#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

typedef long long ll;

namespace IO {
ll read() {
  ll x = 0, sgn = 1;
  char ch = getchar();
  for (; !isdigit(ch); ch = getchar())
    if (ch == '-') sgn = -1;
  for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
  return sgn * x;
}

void print(ll n) {
  if (n > 9) print(n / 10);
  putchar(n % 10 + '0');
}

void print(ll n, char end) {
  print(n);
  putchar(end);
}

void println(ll n) { print(n, '\n'); }
}  // namespace IO

int main() {
  ll n = IO::read(), res = 0;
  for (int i = 1; i <= n; ++i) {
    res += i;
    IO::println(res);
  }
  return 0;
}