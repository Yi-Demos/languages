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
| `std::string::size()`   | 取得字串長度                 | `std::string str = "hello";<br>size_t len = str.size(); // len = 5` |
| `std::string::empty()`  | 判斷字串是否為空             | `bool isEmpty = str.empty();`    |
| `std::string::at(index)`| 取得指定索引的字元           | `char ch = str.at(1); // ch = 'e'` |
| `std::string::front()`  | 取得字串的第一個字元         | `char firstChar = str.front();`  |
| `std::string::back()`   | 取得字串的最後一個字元       | `char lastChar = str.back();`    |

---

### 2. **字串修改**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::string::append()`  | 在字串後追加內容              | `str.append(" world"); // str = "hello world"` |
| `std::string::insert()`  | 在指定位置插入內容            | `str.insert(5, ","); // str = "hello, world"` |
| `std::string::erase()`   | 刪除指定範圍的字元            | `str.erase(5, 1); // str = "helloworld"` |
| `std::string::replace()` | 替換指定範圍的字元            | `str.replace(5, 5, "WORLD"); // str = "helloWORLD"` |
| `std::string::clear()`   | 清空字串                      | `str.clear(); // str = ""`       |

---

### 3. **子字串操作**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::string::substr()`  | 擷取子字串                    | `std::string sub = str.substr(0, 5); // sub = "hello"` |
| `std::string::find()`    | 查找子字串首次出現的位置      | `size_t pos = str.find("world"); // pos = 6` |
| `std::string::rfind()`   | 查找子字串最後出現的位置      | `size_t pos = str.rfind("o"); // pos = 7` |
| `std::string::find_first_of()` | 查找任一字符首次出現的位置 | `size_t pos = str.find_first_of("aeiou");` |
| `std::string::find_last_of()`  | 查找任一字符最後出現的位置 | `size_t pos = str.find_last_of("aeiou");` |

---

### 4. **字串比較**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::string::compare()` | 比較兩個字串                  | `int result = str.compare("hello");` |

---

### 5. **字串與數字轉換**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::to_string()`       | 將數字轉為字串                | `std::string numStr = std::to_string(123); // numStr = "123"` |
| `std::stoi()`            | 將字串轉為整數                | `int num = std::stoi("123"); // num = 123` |
| `std::stol()`            | 將字串轉為長整數              | `long num = std::stol("1234567890");` |
| `std::stof()`            | 將字串轉為浮點數              | `float num = std::stof("3.14");` |
| `std::stod()`            | 將字串轉為雙精度浮點數        | `double num = std::stod("3.14159");` |

---

## 📌 **數字操作**

### 1. **數學函數**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::abs()`             | 取絕對值                      | `int absVal = std::abs(-5); // absVal = 5` |
| `std::pow()`             | 指數運算                      | `double result = std::pow(2, 3); // result = 8.0` |
| `std::sqrt()`            | 平方根                        | `double root = std::sqrt(16); // root = 4.0` |
| `std::max()`             | 取最大值                      | `int maxVal = std::max(3, 7); // maxVal = 7` |
| `std::min()`             | 取最小值                      | `int minVal = std::min(3, 7); // minVal = 3` |
| `std::round()`           | 四捨五入                      | `double rounded = std::round(3.6); // rounded = 4.0` |
| `std::floor()`           | 向下取整                      | `double floored = std::floor(3.9); // floored = 3.0` |
| `std::ceil()`            | 向上取整                      | `double ceiled = std::ceil(3.1); // ceiled = 4.0` |

---

### 2. **隨機數**

| 方法                     | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `std::rand()`            | 生成隨機整數                  | `int randomNum = std::rand();`   |
| `std::srand()`           | 設定隨機數種子                | `std::srand(static_cast<unsigned>(std::time(nullptr)));` |
****
---

### 3. **位操作**

| 操作符                   | 描述                          | 範例                             |
|--------------------------|-------------------------------|----------------------------------|
| `&`                      | 位元與                        | `int result = a & b;`            |
| `|`                      | 位元或                        | `int result = a | b;`            |
| `^`                      | 位元異或                      | `int result = a ^ b;`            |
|