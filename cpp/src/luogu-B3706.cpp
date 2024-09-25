#include <cmath>
#include <cstdio>
#include <iostream>

double x, z;
double c;

int main() {
  std::cin >> x >> z;
  std::cin >> c;
  printf("%.0lf\n", ceil(1.0 * (x - 2 * z) / c));
  return 0;
}