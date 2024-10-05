#include <iomanip>
#include <iostream>
#include <algorithm>
#include <ostream>

double myMax(int x, int y, int z) {
  return std::max(x, std::max(y, z));
}

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  double ans = myMax(a, b, c) / myMax(a + b, b, c) / myMax(a, b, b + c);
  std::cout << std::fixed << std::setprecision(3) << ans << std::endl;
  return 0;
}
