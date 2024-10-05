#include <cmath>
#include <iomanip>
#include <iostream>
struct Point {
  double x, y;
};

double dis(Point a, Point b) {
  double x = a.x - b.x, y = a.y - b.y;
  return sqrt(x * x + y * y);
}

int main() {
  Point a, b, c;
  std::cin >> a.x >> a.y;
  std::cin >> b.x >> b.y;
  std::cin >> c.x >> c.y;
  std::cout << std::fixed << std::setprecision(2)
            << dis(a, b) + dis(b, c) + dis(a, c) << std::endl;
  return 0;
}
