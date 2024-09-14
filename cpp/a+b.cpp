#include <iostream>
#include <cstdio>

namespace IO
{
    inline int read()
    {
        int x = 0, f = 1;
        char c = getchar();
        while (!isdigit(c))
        {
            if (c == '-')
                f = -1;
            c = getchar();
        }
        while (isdigit(c))
        {
            x = x * 10 + (c ^ 48), c = getchar();
        }
        return x * f;
    }
    void print(int x, char nxt = ' ')
    {
        printf("%d%c", x, nxt);
    }

    void endl()
    {
        putchar('\n');
    }

    void println(int x)
    {
        printf("%d\n", x);
    }
}

int main()
{
    int a = IO::read(), b = IO::read();
    IO::println(a + b);
    return 0;
}