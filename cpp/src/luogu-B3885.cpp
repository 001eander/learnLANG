#include <iostream>

using namespace std;

int main() {
  int a, b, R, V, M;
  cin >> a >> b >> R >> V >> M;
  cout << (b + 4 * a) * R << " ";
  cout << (b + 6 * a) * V << " ";
  cout << (b + 6 * a) * M << " ";
  cout << endl;
}