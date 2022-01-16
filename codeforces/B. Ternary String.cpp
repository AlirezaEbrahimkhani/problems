#include <iostream>
#include <vector>

int main()
{
    int t;
    std::string buf;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
    {
        std::cin >> buf;
        int ans = int(1e9);
        std::vector<std::pair<char, int>> c;

        for (auto x : buf)
        {
            if (c.empty() || c.back().first != x)
                c.push_back(std::make_pair(x, 1));
            else
                c.back().second++;
        }

        for (int i = 1; i < c.size() - 1; ++i)
            if (c[i - 1].first != c[i + 1].first)
                ans = std::min(ans, c[i].second + 2);

        if (ans > buf.size())
            ans = 0;

        std::cout << ans << "\n";
    }
}