#include <iostream>

typedef long long ll;

ll det(ll a, ll b, ll c, ll d);

int main() {
  ll a, b, c, d;
  std::cin >> a >> b >> c >> d;
  ll ans = det(a, b, c, d);
  std::cout << ans << std::endl;
  return 0;
}

ll det(ll a, ll b, ll c, ll d) { return a * d - b * c; }
