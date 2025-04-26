/*
 * @lc app=leetcode id=729 lang=cpp
 *
 * [729] My Calendar I
 */

// @lc code=start
class MyCalendar {
 public:
  MyCalendar() {}

  bool book(int startTime, int endTime) {
    // 找到第一個開始時間不小於 start 的事件
    auto next = calendar.lower_bound(startTime);

    // 檢查與下一個事件是否有重疊
    if (next != calendar.end() && next->first < endTime) return false;

    // 檢查與前一個事件是否有重疊
    if (next != calendar.begin()) {
      auto prev = std::prev(next);
      if (prev->second > startTime) return false;
    }

    // 無重疊，新增事件
    calendar[startTime] = endTime;
    return true;
  }

 private:
  map<int, int> calendar;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */
// @lc code=end