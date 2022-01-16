#include <iostream>
#include <utility>

int main()
{
    int n;
    std ::cin >> n;

    (n % 2 == 0) ? std::cout << (n * n) / 2 << "\n" : std::cout << ((n * n) / 2) + 1 << "\n";

    for (int i{0}; i < n; ++i)
    {
        for (int j{0}; j < n; ++j)
        {
            if (i % 2 == 0 && j % 2 == 0)
                std ::cout << "C";
            else if (i % 2 != 0 && j % 2 != 0)
                std ::cout << "C";
            else
                std::cout << ".";
        }
        std::cout << "\n";
    }

    return 0;
}