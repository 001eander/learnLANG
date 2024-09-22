#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    int a;
    scanf("%d\n", &a);
    printf("%d\n", int(ceil(a * a / 100.0)));
    return 0;
}