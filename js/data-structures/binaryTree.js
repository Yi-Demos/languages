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
    const insertNode = (node, value) => {
      if (node === null) return new Node(value);
      if (value < node.value) node.left = insertNode(node.left, value);
      if (value > node.value) node.right = insertNode(node.right, value);

      return node;
    };

    this.root = insertNode(this.root, value);
  }
  find() {}
  // 廣度優先搜尋（BFS）
  bfs() {
    const queue = [this.root];
    const result = [];

    while (queue.length) {
      const current = queue.shift();
      result.push(current.value);

      if (current.left) queue.push(current.left);
      if (current.right) queue.push(current.right);
    }

    return result
  }
  // 深度優先搜尋（DFS） - 前序遍歷
  dfsPreOrder() {
    const result = [];
    const traverse = (node) => {
      if (node) {
        result.push(node.value); // 訪問節點
        traverse(node.left);     // 遍歷左子樹
        traverse(node.right);    // 遍歷右子樹
      }
    };
    traverse(this.root);
    return result;
  }
  // 深度優先搜尋（DFS） - 中序遍歷
  dfsInOrder() {
    const result = [];
    const traverse = (node) => {
      if (node) {
        traverse(node.left);     // 遍歷左子樹
        result.push(node.value); // 訪問節點
        traverse(node.right);    // 遍歷右子樹
      }
    };
    traverse(this.root);
    return result;
  }
  // 深度優先搜尋（DFS） - 後序遍歷
  dfsPostOrder() {
    const result = [];
    const traverse = (node) => {
      if (node) {
        traverse(node.left);     // 遍歷左子樹
        traverse(node.right);    // 遍歷右子樹
        result.push(node.value); // 訪問節點
      }
    };
    traverse(this.root);
    return result;
  }
  printTree(node, prefix = '', isLeft = true) {
    if (node === null) return;

    console.log(prefix + (isLeft ? '├── left : ' : '└── right : ') + node.value);

    const newPrefix = prefix + (isLeft ? '│   ' : '    ');

    this.printTree(node.left, newPrefix, true);
    this.printTree(node.right, newPrefix, false);
  }
}
// test
const tree = new BinarySearchTree();
tree.insert(10);
tree.insert(5);
tree.insert(15);
tree.insert(3);
tree.insert(7);
tree.insert(12);
tree.insert(18);
tree.insert(17);

console.log("Traversal:");
// tree.preOrderTraversal(tree.root, (value) => console.log(value));
tree.printTree(tree.root);
const bfs = tree.BFS();
console.log("BFS:", bfs);