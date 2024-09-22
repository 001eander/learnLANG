#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    bool flag = true;
    flag &= (a + b + c <= 100);
    flag &= (b % 5 == 0);
    flag &= (c % 7 == 0);
    flag &= (a - b > b - c);
    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return EXIT_SUCCESS;
}