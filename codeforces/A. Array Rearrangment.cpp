#include <iostream>
#include <algorithm>
#include <vector>

void fillArray(std::vector<int> &array)
{
    int input;
    for (size_t i{0}; i < array.size(); ++i)
    {
        std::cin >> input;
        array[i] = input;
    }
}

int main()
{
    int t, n, x;
    std::vector<int> a, b;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n >> x;
        a.resize(n);
        b.resize(n);
        fillArray(a);
        fillArray(b);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), std::greater<int>());

        bool fault{true};
        for (size_t i{0}; i < a.size(); ++i)
            if (a.at(i) + b.at(i) > x)
            {
                fault = false;
                break;
            }
        std::cout << (fault ? "Yes\n" : "No\n");
    }
}
