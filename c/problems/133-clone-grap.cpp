// https://www.youtube.com/watch?v=NCQMg-WMRZc
#include <iostream>

using namespace std;

// Definition for a Node.
class Node {
 public:
  int val;
  vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = vector<Node*>();
  }
  Node(int _val) {
    val = _val;
    neighbors = vector<Node*>();
  }
  Node(int _val, vector<Node*> _neighbors) {
    val = _val;
    neighbors = _neighbors;
  }
};

class Solution {
 public:
  unordered_map<Node*, Node*> record;

  Node* cloneGraph(Node* node) {
    if (!node) return node;
    if (record.count(node)) return record[node];
    Node* cloneNode = new Node(node->val);
    record[node] = cloneNode;
    for (const auto& i : node->neighbors) {
      cloneNode->neighbors.push_back(cloneGraph(i));
    }
    return cloneNode;
  }
};

int main() {
  Solution solution;
  // solution.cloneGraph();

  return 0;
}