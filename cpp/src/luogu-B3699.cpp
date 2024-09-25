#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

typedef long long LL;

namespace IO {
LL read() {
  LL x = 0, sgn = 1;
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

bool contain62(LL num) {
  if (num < 62) return false;
  if (num % 100 == 62) return true;
  return contain62(num / 10);
}

int main() {
  LL num = read();
  cout << ((num % 62 == 0 || contain62(num)) ? "Yes" : "No") << endl;
  return 0;
}