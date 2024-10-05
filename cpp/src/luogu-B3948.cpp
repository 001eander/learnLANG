#include <iostream>
#include <ostream>
int getScore(int *a, int *b) {
  if (b[1] == 0 and b[2] == 0 and b[3] == 0 and b[4] == 0)
    return 0;
  bool wrong = false;
  for (int i = 1; i <= 4; ++i)
    wrong = wrong or (not a[i] and b[i]);
  if (wrong) return 0;
  bool fullCorrect = true;
  for (int i = 1;i <= 4; ++i)
    fullCorrect = fullCorrect and (a[i] == b[i]);
  if (fullCorrect) return 6;
  return 3;
}
int n;
int a[1000 + 3][4 + 1];
int b[1000 + 3][4 + 1];
int main() {
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j <= 4; ++j) {
      std::cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j <= 4; ++j) {
      std::cin >> b[i][j];
    }
  }
  for (int i = 0; i < n; ++i) {
    int res = 0;
    for (int j = 0; j < n; ++j) {
      res += getScore(a[(i + j) % n], b[j]);
    }
    std::cout << res << " \n"[i + 1 == n];
  }
  return 0;
}
