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

bool check(string str) {
  str = "0" + str;
  for (size_t i = 0; i + 1 < str.size(); ++i) {
    int res = 10 * (str[i] - '0') + str[i + 1] - '0';
    if (res % 4 == 0) return true;
    res = 10 * (str[i] - '0') + str[str.size() - 1] - '0';
    if (res % 4 == 0) return true;
  }
  return false;
}

int main() {
  for (int T = read(); T; --T) {
    string str;
    cin >> str;
    cout << (check(str) ? "Yes" : "No") << endl;
  }
  return 0;
}