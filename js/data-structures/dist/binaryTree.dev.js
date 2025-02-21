"use strict";

function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } }

function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); return Constructor; }

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

var Node = function Node(value) {
  _classCallCheck(this, Node);

  this.value = value;
  this.left = null;
  this.right = null;
};

var BinarySearchTree =
/*#__PURE__*/
function () {
  function BinarySearchTree() {
    _classCallCheck(this, BinarySearchTree);

    this.root = null;
  }

  _createClass(BinarySearchTree, [{
    key: "insert",
    value: function insert(value) {
      var insertNode = function insertNode(node, value) {
        if (node === null) return new Node(value);
        if (value < node.value) node.left = insertNode(node.left, value);
        if (value > node.value) node.right = insertNode(node.right, value);
        return node;
      };

      this.root = insertNode(this.root, value);
    }
  }, {
    key: "find",
    value: function find() {} // 廣度優先搜尋（BFS）

  }, {
    key: "bfs",
    value: function bfs() {
      var queue = [this.root];
      var result = [];

      while (queue.length) {
        var current = queue.shift();
        result.push(current.value);
        if (current.left) queue.push(current.left);
        if (current.right) queue.push(current.right);
      }

      return result;
    } // 深度優先搜尋（DFS） - 前序遍歷

  }, {
    key: "dfsPreOrder",
    value: function dfsPreOrder() {
      var result = [];

      var traverse = function traverse(node) {
        if (node) {
          result.push(node.value); // 訪問節點

          traverse(node.left); // 遍歷左子樹

          traverse(node.right); // 遍歷右子樹
        }
      };

      traverse(this.root);
      return result;
    } // 深度優先搜尋（DFS） - 中序遍歷

  }, {
    key: "dfsInOrder",
    value: function dfsInOrder() {
      var result = [];

      var traverse = function traverse(node) {
        if (node) {
          traverse(node.left); // 遍歷左子樹

          result.push(node.value); // 訪問節點

          traverse(node.right); // 遍歷右子樹
        }
      };

      traverse(this.root);
      return result;
    } // 深度優先搜尋（DFS） - 後序遍歷

  }, {
    key: "dfsPostOrder",
    value: function dfsPostOrder() {
      var result = [];

      var traverse = function traverse(node) {
        if (node) {
          traverse(node.left); // 遍歷左子樹

          traverse(node.right); // 遍歷右子樹

          result.push(node.value); // 訪問節點
        }
      };

      traverse(this.root);
      return result;
    }
  }, {
    key: "printTree",
    value: function printTree(node) {
      var prefix = arguments.length > 1 && arguments[1] !== undefined ? arguments[1] : '';
      var isLeft = arguments.length > 2 && arguments[2] !== undefined ? arguments[2] : true;
      if (node === null) return;
      console.log(prefix + (isLeft ? '├── left : ' : '└── right : ') + node.value);
      var newPrefix = prefix + (isLeft ? '│   ' : '    ');
      this.printTree(node.left, newPrefix, true);
      this.printTree(node.right, newPrefix, false);
    }
  }]);

  return BinarySearchTree;
}(); // test


var tree = new BinarySearchTree();
tree.insert(10);
tree.insert(5);
tree.insert(15);
tree.insert(3);
tree.insert(7);
tree.insert(12);
tree.insert(18);
tree.insert(17);
console.log("Traversal:"); // tree.preOrderTraversal(tree.root, (value) => console.log(value));

tree.printTree(tree.root);
var bfs = tree.BFS();
console.log("BFS:", bfs);