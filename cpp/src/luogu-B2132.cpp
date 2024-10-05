#include <iostream>
#include <vector>
bool is_prime[10000 + 4];
std::vector<int> primes;
void getPrimes() {
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= 10000; ++i)
    is_prime[i] = true;
  for (int i = 2; i <= 10000; ++i)
    if (is_prime[i]) {
      primes.push_back(i);
      for (int j = i * i; j <= 10000; j += i)
        is_prime[j] = false;
    }
}
int main() {
  getPrimes();
  int n;
  std::cin >> n;
  bool findPrimePair = false;
  for(auto i = primes.begin() + 1; i < primes.end(); ++i) {
    if (*i > n) break;
    if (*i - *(i - 1) == 2) {
      std::cout << *(i - 1) << " " << *i << std::endl;
      findPrimePair = true;
    }
  }
  if (not findPrimePair) std::cout << "empty" << std::endl;
  return 0;
}
