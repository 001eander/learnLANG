#include <iostream>
#include <algorithm>

__int128 n, m, arr[85];
__int128 dp[85][85];
__int128 ans;

namespace IO
{
    __int128 read()
    {
        __int128 x = 0;
        char ch = getchar();
        while (!isdigit(ch))
            ch = getchar();
        while (isdigit(ch))
        {
            x = x * 10 + ch - '0';
            ch = getchar();
        }
        return x;
    }

    void print(__int128 n)
    {
        if (n > 9)
        {
            print(n / 10);
        }
        putchar(n % 10 + '0');
    }
}

__int128 pow(int x)
{
    __int128 ans = 1;
    for (int i = 0; i < x; ++i)
        ans = ans * 2;
    return ans;
}

int main()
{
    n = IO::read();
    m = IO::read();
    for (int i = 0; i < n; ++i)
    {
        for (int x = 1; x <= m; ++x)
            for (int y = 1; y <= m; ++y)
                dp[x][y] = 0;
        for (int j = 1; j <= m; ++j)
            arr[j] = IO::read();
        for (int x = 1; x <= m; ++x)
            for (int y = m; y >= x; --y)
                dp[x][y] = std::max(
                    dp[x][y + 1] + arr[y + 1] * pow(m - y + x - 1),
                    dp[x - 1][y] + arr[x - 1] * pow(m - y + x - 1));
        __int128 res = 0;
        for (int i = 1; i <= m; ++i)
            res = std::max(res, dp[i][i] + arr[i] * pow(m));
        ans += res;
    }
    IO::print(ans);
    puts("")
    return 0;
}