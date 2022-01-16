#include <iostream>
#include <utility>

int main()
{
    int n, m;
    std::pair<int, int> counter;
    std ::cin >> n >> m;
    if (m > n)
        std::cout << "-1";
    else
    {
        if (n % 2 == 0)
        {
            counter.first = n / 2;
            counter.second = 0;
        }
        else
        {
            counter.first = (n / 2);
            counter.second = 1;
        }
        while ((counter.first + counter.second) % m != 0)
        {
            counter.first--;
            counter.second += 2;
        }
        std::cout << counter.first + counter.second;
    }

    return 0;
}