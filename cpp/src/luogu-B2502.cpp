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

int print(int n) {
  if (n > 9) print(n / 10);
  putchar(n % 10 + '0');
  return n;
}
LL print(LL n) {
  if (n > 9) print(n / 10);
  putchar(n % 10 + '0');
  return n;
}

int print(int n, char end) {
  print(n);
  putchar(end);
  return n;
}
LL print(LL n, char end) {
  print(n);
  putchar(end);
  return n;
}

int println(int n) { return print(n, '\n'); }
LL println(LL n) { return print(n, '\n'); }
}  // namespace IO

using namespace std;
using namespace IO;

int main() {
  int a, b;
  char c;
  cin >> a >> b >> c;
  if (c == '+') {
    cout << a + b << endl;
  } else if (c == '-') {
    cout << a - b << endl;
  } else if (c == '*') {
    cout << a * b << endl;
  } else if (c == '/') {
    if (b == 0)
      puts("Divided by zero!");
    else
      cout << int(a / b) << endl;
  } else {
    puts("Invalid operator!");
  }
  return 0;
}