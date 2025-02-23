#include <iostream>
#include <set>

using namespace std;

int main() {
    // 创建一个空的 set
    set<int> mySet;

    // 插入元素
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(1); // 重复元素，不会被插入

    // 遍历并输出 set 中的元素
    std::cout << "set 中的元素：";
    for (const auto& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 查找元素
    auto search = mySet.find(2);
    if (search != mySet.end()) {
        std::cout << "找到元素：2" << std::endl;
    } else {
        std::cout << "未找到元素：2" << std::endl;
    }

    // 删除元素
    mySet.erase(3);
    std::cout << "删除元素 3 后，set 中的元素：";
    for (const auto& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
