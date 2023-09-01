#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int fact(int x)
{
    if (x == 0) {
        return 1;
    }
    return x * fact(x - 1);
}

int sum_fact(int x)
{
    if (x == 1) {
        return 1;
    }
    return fact(x) + sum_fact(x - 1);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << sum_fact(n) << endl;
    return 0;
}
