#include <iostream>
#include <vector>
int main()
{
    int test_cases, size, input;
    std::cin >> test_cases;
    std::vector<std::vector<int>> a;
    for (size_t i{0}; i < test_cases; ++i)
    {
        int input;
        std::vector<int> b;
        std::cin >> input;
        for (size_t j{0}; j < input; ++j)
        {
            int c;
            std::cin >> c;
            b.push_back(c);
        }
        a.push_back(b);
    }

    for (unsigned k{0}; k < a.size(); ++k)
    {
        int temp = a[k].size() - 1;
        while (temp >= 0)
        {
            if (temp == 0)
            {
                std::cout << a[k][temp];
                break;
            }
            std::cout << a[k][0] << " ";
            std::cout << a[k][temp] << " ";
            a[k].erase(a[k].begin());
            a[k].pop_back();
            temp -= 2;
        }
        std::cout << "\n";
    }

    return 0;
}