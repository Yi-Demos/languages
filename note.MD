1.1 Array
1.2 Linked List
1.3 Interrupt Handling

2.1. HashSet / HashTable
2.2. Tree
2.3. Heap

3.1. Binary Search
3.2. Breadth-First Search
3.3. Best-First Search
3.4. Depth-First Search
3.5. Backtracking


陣列（Array）相關題目：
<!-- https://zansy.github.io/2019/08/27/leetcode-easy/ -->

26 刪除排序陣列中的重複項目（Remove Duplicates from Sorted Array）
27 移除元素（Remove Element）
53 最大子陣列和（Maximum Subarray）
88 合併兩個有序陣列（Merge Sorted Array）
118 楊輝三角（Pascal's Triangle）


<!-- Kadane's Algorithm -->
[53] Maximum Subarray
[152] Maximum Product Subarray


<!-- DP -->

983 Minimum Cost For Tickets
322 Coin Change
139 Word Break
198 House Robber
1143 Longest Common Subsequence
1235 Maximum Profit in Job Scheduling
1278 Palindrome Partitioning III

🟢 Level 1：DP 基本觀念 - 一維遞推
這階段重點在熟悉 dp[i] = ... 的遞推方式

70. Climbing Stairs ⭐️Easy
最基礎的 DP 題，像 Fibonacci
198. House Robber ⭐️Easy
加入「不能偷相鄰」，學會跳著做遞推
746. Min Cost Climbing Stairs ⭐️Easy
有點像爬樓梯但加上花費，慢慢靠近 983 的型態
213. House Robber II ⭐️Medium
多了環狀限制，要拆成兩段處理

🟡 Level 2：經典轉移 - 背包與切割
這階段練習分段處理、條件轉移，為時間段作準備

322. Coin Change ⭐️Medium
非常像 983 題，只是換成金額轉移
139. Word Break ⭐️Medium
切割字串，考慮不同「段」的狀態轉移
518. Coin Change II ⭐️Medium
組合型 DP，要注意順序跟狀態意義

🔵 Level 3：時間軸 + 區段決策

進入像 983 題這樣的「覆蓋問題」、「最小/最大成本決策」
983. Minimum Cost For Tickets ⭐️Medium
✅ 主題關鍵題，搞懂它就是 DP 升級
1235. Maximum Profit in Job Scheduling ⭐️Hard
跟 983 很像，但是最大化報酬 + 要用 binary search 搭配 DP
1344. Jump Game V ⭐️Hard
從每格往前跳後跳，考慮區間的最大收益

🔴 Level 4：進階強化題
難度提高，適合你完全掌握 DP 概念後刷：

2218. Maximum Value of K Coins From Piles ⭐️Hard
1043. Partition Array for Maximum Sum ⭐️Medium
837. New 21 Game ⭐️Medium-Hard
174. Dungeon Game ⭐️Hard



------
遞迴 + 分治 + 組合型 Leetcode 題目練習清單

✅ 241. Different Ways to Add Parentheses（你已經完成 🎉）
🔢 93. Restore IP Addresses（熟悉遞迴切割字串）
🔁 39. Combination Sum（進一步練習組合所有可能）
🌲 95. Unique Binary Search Trees II（開始學建構「所有結構」）
✍️ 282. Expression Add Operators（進階版數學表達式處理）
♟️ 51. N-Queens（經典所有合法擺法問題）
♟️ 52. N-Queens II（優化型題目，練邏輯與效率）

------
DFS

104. Maximum Depth of Binary Tree 👉 DFS 的 Hello World | DONE
695. Max Area of Island 👉 練習 grid 遍歷 & DFS
112. Path Sum 👉 練習 DFS + 加總路徑邏輯 | DONE
733. Flood Fill 👉 DFS 填色題，常出現在筆試
257. Binary Tree Paths 👉 練 DFS 組路徑 | DONE
17. Letter Combinations... 👉 開始學 backtracking 的 DFS