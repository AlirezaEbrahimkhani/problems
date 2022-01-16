#include <iostream>
#include <vector>
#include <algorithm>
 
void getData(std::vector<int> &datas, int inputNums)
{
    for (size_t i{0}; i < inputNums; ++i)
    {
        int temp;
        std::cin >> temp;
        datas.push_back(temp);
    }
}
 
int main()
{
    int inputNum;
    std::vector<int> datas;
    std::cin >> inputNum;
    getData(datas, inputNum);
    std::sort(datas.begin(), datas.end());
 
    for (size_t i{0}; i < datas.size(); ++i)
    {
        std::cout << datas[i] << " ";
    }
 
    return 0;
}