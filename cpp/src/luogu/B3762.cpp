#include <iostream>

long long det(long long a, long long b, long long c, long long d);

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long ans = det(a, b, c, d);

    std::cout << ans << std::endl;

    return 0;
}

long long det(long long a, long long b, long long c, long long d)
{
    return a * d - b * c;
}
