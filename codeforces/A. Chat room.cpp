#include <iostream>
#include <string>
int main()
{
    std::string s, hello;
    std::string current = "hello";
    int j = 0;
    std::cin >> s;
    for (size_t i{0}; i < s.size(); ++i)
    {
        if (s[i] == current[j])
        {
            hello += s[i];
            j++;
        }
    }
    if (hello.compare(current) == 0)
        std::cout << "YES";
    else
        std::cout << "NO";
 
    return 0;
}