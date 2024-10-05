#include <iostream>

int main() {
    int m, t, s;
    std::cin >> m >> t >> s;
    for (int i = 0; i < s && m > 0; i += t) m--;
    std::cout << m << std::endl;
    return 0;
}