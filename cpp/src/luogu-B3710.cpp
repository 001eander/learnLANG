#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

typedef long long LL;

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
  if (n > 9) print(n / 10);
  putchar(n % 10 + '0');
}
void print(LL n) {
  if (n > 9) print(n / 10);
  putchar(n % 10 + '0');
}

void print(int n, char end) {
  print(n);
  putchar(end);
}
void print(LL n, char end) {
  print(n);
  putchar(end);
}

void println(int n) { print(n, '\n'); }
void println(LL n) { print(n, '\n'); }
}  // namespace IO

using namespace std;
using namespace IO;

int main() {
  string S;
  cin >> S;
  int s = 0, ans = 0;
  if (S == "1.0000000") return println(1), 0;
  for (auto i = 2; i < S.size(); ++i) s = s * 10 + S[i] - '0';
  for (int i = 0; i <= 100; ++i)
    for (int j = 0; j <= 100; ++j)
      for (int k = 0; k <= 100; ++k)
        for (int l = 0; l <= 100; ++l) ans += (s == i * j * k * l);
  IO::println(ans);
  return 0;
}