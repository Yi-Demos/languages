class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }
  insert(value) {
    const newNode = new Node(value);

    if (!this.root) {
      this.root = newNode;
      return this;
    }

    let current = this.root;

    let _insert = (current) => {
      if (value < current.value) {
        if (current.left) return _insert(current.left);

        current.left = newNode;
        return this;
      } else {
        if (current.right) return _insert(current.right);

        current.right = newNode;
        return this;
      }
    };

    // while (true) {
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
  find() {}
  BFS() {}
  DFS() {}

  // 前序遍歷：根 -> 左 -> 右
  preOrderTraversal(node, callback) {
    if (node !== null) {
      callback(node.value);
      this.preOrderTraversal(node.left, callback);
      this.preOrderTraversal(node.right, callback);
    }
  }

  // 中序遍歷：左 -> 根 -> 右
  inOrderTraversal(node, callback) {
    if (node !== null) {
      this.inOrderTraversal(node.left, callback);
      callback(node.value);
      this.inOrderTraversal(node.right, callback);
    }
  }

  // 後序遍歷：左 -> 右 -> 根
  postOrderTraversal(node, callback) {
    if (node !== null) {
      this.postOrderTraversal(node.left, callback);
      this.postOrderTraversal(node.right, callback);
      callback(node.value);
    }
  }
}
// 使用範例
const tree = new BinarySearchTree();
tree.insert(10);
tree.insert(5);
tree.insert(15);
tree.insert(3);
tree.insert(7);
tree.insert(12);
tree.insert(18);

console.log("前序遍歷:");
tree.preOrderTraversal(tree.root, (value) => console.log(value));