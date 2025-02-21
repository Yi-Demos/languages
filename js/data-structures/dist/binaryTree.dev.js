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
      var _this = this;

      var newNode = new Node(value);

      if (!this.root) {
        this.root = newNode;
        return this;
      }

      var current = this.root;

      var _insert = function _insert(current) {
        if (value < current.value) {
          if (current.left) return _insert(current.left);
          current.left = newNode;
          return _this;
        } else {
          if (current.right) return _insert(current.right);
          current.right = newNode;
          return _this;
        }
      }; // while (true) {
      //   if (value === current.value) return undefined;
      //   if (value < current.value) {
      //     if (!current.left) {
      //       current.left = newNode;
      //       return this;
      //     }
      //     current = current.left;
      //   } else {
      //     if (!current.right) {
      //       current.right = newNode;
      //       return this;
      //     }
      //     current = current.right;
      //   }
      // }

    }
  }, {
    key: "find",
    value: function find() {}
  }, {
    key: "BFS",
    value: function BFS() {}
  }, {
    key: "DFS",
    value: function DFS() {} // 前序遍歷：根 -> 左 -> 右

  }, {
    key: "preOrderTraversal",
    value: function preOrderTraversal(node, callback) {
      if (node !== null) {
        callback(node.value);
        this.preOrderTraversal(node.left, callback);
        this.preOrderTraversal(node.right, callback);
      }
    } // 中序遍歷：左 -> 根 -> 右

  }, {
    key: "inOrderTraversal",
    value: function inOrderTraversal(node, callback) {
      if (node !== null) {
        this.inOrderTraversal(node.left, callback);
        callback(node.value);
        this.inOrderTraversal(node.right, callback);
      }
    } // 後序遍歷：左 -> 右 -> 根

  }, {
    key: "postOrderTraversal",
    value: function postOrderTraversal(node, callback) {
      if (node !== null) {
        this.postOrderTraversal(node.left, callback);
        this.postOrderTraversal(node.right, callback);
        callback(node.value);
      }
    }
  }]);

  return BinarySearchTree;
}(); // 使用範例


var tree = new BinarySearchTree();
tree.insert(10);
tree.insert(5);
tree.insert(15);
tree.insert(3);
tree.insert(7);
tree.insert(12);
tree.insert(18);
console.log("前序遍歷:");
tree.preOrderTraversal(tree.root, function (value) {
  return console.log(value);
});