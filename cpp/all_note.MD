puts()：只能输出字符串，并且输出结束后会自动换行。
printf()：可以输出各种类型的数据。
----
system::Math::Sqrt() 相當於System.Math.Sqrt()


在 LeetCode 上解答涉及 **字串** 和 **數字** 的問題時，熟悉 C++ 的相關功能和方法是非常重要的。以下是一些常用的 C++ 功能，這些工具能有效解決大多數與字串、數字操作有關的問題。

---

## 📌 **字串操作**

### 1. **基本屬性與方法**

| 方法/屬性               | 描述                         | 範例                             |
|-------------------------|------------------------------|----------------------------------|
| `string::size()`   | 取得字串長度                 | `string str = "hello";<br>size_t len = str.size(); // len = 5` |
| `string::empty()`  | 判斷字串是否為空             | `bool isEmpty = str.empty();`    |
| `string::at(index)`| 取得指定索引的字元           | `char ch = str.at(1); // ch = 'e'` |
| `string::front()`  | 取得字串的第一個字元         | `char firstChar = str.front();`  |
| `string::back()`   | 取得字串的最後一個字元       | `char lastChar = str.back();`    |

---

### 2. **字串修改**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `string::append()`  | 在字串後追加內容              | `str.append(" world"); // str = "hello world"` |
| `string::insert()`  | 在指定位置插入內容            | `str.insert(5, ","); // str = "hello, world"` |
| `string::erase()`   | 刪除指定範圍的字元            | `str.erase(5, 1); // str = "helloworld"` |
| `string::replace()` | 替換指定範圍的字元            | `str.replace(5, 5, "WORLD"); // str = "helloWORLD"` |
| `string::clear()`   | 清空字串                      | `str.clear(); // str = ""`       |

---

### 3. **子字串操作**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `string::substr()`  | 擷取子字串                    | `string sub = str.substr(0, 5); // sub = "hello"` |
| `string::find()`    | 查找子字串首次出現的位置      | `size_t pos = str.find("world"); // pos = 6` |
| `string::rfind()`   | 查找子字串最後出現的位置      | `size_t pos = str.rfind("o"); // pos = 7` |
| `string::find_first_of()` | 查找任一字符首次出現的位置 | `size_t pos = str.find_first_of("aeiou");` |
| `string::find_last_of()`  | 查找任一字符最後出現的位置 | `size_t pos = str.find_last_of("aeiou");` |

---

### 4. **字串比較**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `string::compare()` | 比較兩個字串                  | `int result = str.compare("hello");` |

---

### 5. **字串與數字轉換**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `to_string()`       | 將數字轉為字串                | `string numStr = to_string(123); // numStr = "123"` |
| `stoi()`            | 將字串轉為整數                | `int num = stoi("123"); // num = 123` |
| `stol()`            | 將字串轉為長整數              | `long num = stol("1234567890");` |
| `stof()`            | 將字串轉為浮點數              | `float num = stof("3.14");` |
| `stod()`            | 將字串轉為雙精度浮點數        | `double num = stod("3.14159");` |

---

## 📌 **數字操作**

### 1. **數學函數**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `abs()`             | 取絕對值                      | `int absVal = abs(-5); // absVal = 5` |
| `pow()`             | 指數運算                      | `double result = pow(2, 3); // result = 8.0` |
| `sqrt()`            | 平方根                        | `double root = sqrt(16); // root = 4.0` |
| `max()`             | 取最大值                      | `int maxVal = max(3, 7); // maxVal = 7` |
| `min()`             | 取最小值                      | `int minVal = min(3, 7); // minVal = 3` |
| `round()`           | 四捨五入                      | `double rounded = round(3.6); // rounded = 4.0` |
| `floor()`           | 向下取整                      | `double floored = floor(3.9); // floored = 3.0` |
| `ceil()`            | 向上取整                      | `double ceiled = ceil(3.1); // ceiled = 4.0` |

---

### 2. **隨機數**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `rand()`            | 生成隨機整數                  | `int randomNum = rand();`   |
| `srand()`           | 設定隨機數種子                | `srand(static_cast<unsigned>(time(nullptr)));` |
****
---

### 3. **位操作**

| 操作符                   | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `&`                      | 位元與                        | `int result = a & b;`            |
| `|`                      | 位元或                        | `int result = a | b;`            |
| `^`                      | 位元異或                      | `int result = a ^ b;`            |
|


===


在 C++ 中，标准模板库（STL）提供了多种容器类型，每种容器都有其特定的用途和用法。以下是一些常见容器的简要介绍及其基本用法示例：

### 1. `std::list`（双向链表）

`std::list` 是一个双向链表容器，允许在常数时间内对任意位置进行插入和删除操作，但不支持随机访问。

```cpp
#include <list>
#include <iostream>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    // 插入元素
    myList.push_back(6);
    myList.push_front(0);

    // 删除元素
    myList.pop_back();
    myList.pop_front();

    // 遍历元素
    for (int n : myList) {
        std::cout << n << ' ';
    }
    return 0;
}
```

### 2. `std::deque`（双端队列）

`std::deque` 是一种双端队列，支持在序列的两端进行高效的插入和删除操作，同时支持随机访问。

```cpp
#include <deque>
#include <iostream>

int main() {
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // 在两端插入元素
    myDeque.push_back(6);
    myDeque.push_front(0);

    // 在两端删除元素
    myDeque.pop_back();
    myDeque.pop_front();

    // 访问元素
    std::cout << myDeque[1] << std::endl;

    // 遍历元素
    for (int n : myDeque) {
        std::cout << n << ' ';
    }
    return 0;
}
```

### 3. `std::map`（映射）

`std::map` 是一种关联容器，存储键值对，键唯一且按顺序排列，通常使用红黑树实现，支持高效的查找、插入和删除操作。

```cpp
#include <map>
#include <iostream>

int main() {
    std::map<std::string, int> myMap;

    // 插入元素
    myMap["apple"] = 3;
    myMap["banana"] = 5;

    // 访问元素
    std::cout << myMap["apple"] << std::endl;

    // 遍历元素
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
```

### 4. `std::multimap`（多重映射）

`std::multimap` 类似于 `std::map`，但允许键重复。

```cpp
#include <map>
#include <iostream>

int main() {
    std::multimap<std::string, int> myMultimap;

    // 插入元素
    myMultimap.insert({"apple", 3});
    myMultimap.insert({"apple", 4});

    // 遍历元素
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
```

### 5. `std::unordered_map`（无序映射）

`std::unordered_map` 是一种无序关联容器，存储键值对，键唯一但无特定顺序，通常使用哈希表实现，支持平均常数时间的查找、插入和删除操作。

```cpp
#include <unordered_map>
#include <iostream>

int main() {
    std::unordered_map<std::string, int> myUnorderedMap;

    // 插入元素
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 5;

    // 访问元素
    std::cout << myUnorderedMap["apple"] << std::endl;

    // 遍历元素
    for (const auto& pair : myUnorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
```

### 6. `std::unordered_multimap`（无序多重映射）

`std::unordered_multimap` 类似于 `std::unordered_map`，但允许键重复。

```cpp
#include <unordered_map>
#include <iostream>

int main() {
    std::unordered_multimap<std::string, int> myUnorderedMultimap;

    // 插入元素
    myUnorderedMultimap.insert({"apple", 3});
    myUnorderedMultimap.insert({"apple", 4});

    // 遍历元素
    for (const auto& pair : myUnorderedMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
```

### 7. `std::stack`（栈）

`std::stack` 是一种适配器容器，遵循后进先出（LIFO）原则，只允许在一端进行插入和删除操作。

```cpp
#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack;

    // 插入元素
    myStack.push(1);
    myStack.push(2);

    // 访问栈顶元素
    std::cout << myStack.top() << std::endl;

    // 删除栈顶元素
    myStack.pop();

    // 访问栈顶元素
    std::cout << myStack.top() << std::endl;

    return 0;
}
```

### 8. `std::queue`（队列）

`std::queue` 是一种适配器容器，遵循先进先出（FIFO）原则，只允许在一端插入，在另一端删除。

```cpp
#include <queue>
#include <iostream>

int main() {
    std::queue<int> myQueue;

    // 插入元素
    myQueue.push(1);
    myQueue.push(2);

    // 访问队首元素
    std::cout << myQueue.front() << std::endl;

    // 删除队首元素
    myQueue.pop();

    // 访问队首元素
    std::cout << myQueue.front() << std::endl;

    return 0;
}
```

### 9. `std::priority_queue`（优先队列）

`std::priority_queue` 是一种适配器容器，类似于堆，元素按优先级排序，每