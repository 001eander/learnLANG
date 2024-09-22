#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector <int> v = {
        9, 2, 5, 3, 7, 5, 2
    };
    std::sort(v.begin(), v.end());
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}