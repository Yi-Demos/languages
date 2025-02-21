"use strict";

function _defineProperties(target, props) {
  for (var i = 0; i < props.length; i++) {
    var descriptor = props[i];
    descriptor.enumerable = descriptor.enumerable || false;
    descriptor.configurable = true;
    if ("value" in descriptor) descriptor.writable = true;
    Object.defineProperty(target, descriptor.key, descriptor);
  }
}

function _createClass(Constructor, protoProps, staticProps) {
  if (protoProps) _defineProperties(Constructor.prototype, protoProps);
  if (staticProps) _defineProperties(Constructor, staticProps);
  return Constructor;
}

function _classCallCheck(instance, Constructor) {
  if (!(instance instanceof Constructor)) {
    throw new TypeError("Cannot call a class as a function");
  }
}

var TrieNode = function TrieNode() {
  _classCallCheck(this, TrieNode);

  this.children = {};
  this.isEndOfWord = false;
};

var Trie =
  /*#__PURE__*/
  (function () {
    function Trie() {
      _classCallCheck(this, Trie);

      this.root = new TrieNode();
    }

    _createClass(Trie, [
      {
        key: "insert",
        value: function insert(word) {
          var node = this.root;
          var _iteratorNormalCompletion = true;
          var _didIteratorError = false;
          var _iteratorError = undefined;

          try {
            for (
              var _iterator = word[Symbol.iterator](), _step;
              !(_iteratorNormalCompletion = (_step = _iterator.next()).done);
              _iteratorNormalCompletion = true
            ) {
              var _char = _step.value;

              if (!node.children[_char]) {
                node.children[_char] = new TrieNode();
              }

              node = node.children[_char];
            }
          } catch (err) {
            _didIteratorError = true;
            _iteratorError = err;
          } finally {
            try {
              if (!_iteratorNormalCompletion && _iterator["return"] != null) {
                _iterator["return"]();
              }
            } finally {
              if (_didIteratorError) {
                throw _iteratorError;
              }
            }
          }

          node.isEndOfWord = true;
        },
      },
      {
        key: "search",
        value: function search(word) {
          var node = this.root;
          var _iteratorNormalCompletion2 = true;
          var _didIteratorError2 = false;
          var _iteratorError2 = undefined;

          try {
            for (
              var _iterator2 = word[Symbol.iterator](), _step2;
              !(_iteratorNormalCompletion2 = (_step2 = _iterator2.next()).done);
              _iteratorNormalCompletion2 = true
            ) {
              var _char2 = _step2.value;

              if (!node.children[_char2]) {
                return false;
              }

              node = node.children[_char2];
            }
          } catch (err) {
            _didIteratorError2 = true;
            _iteratorError2 = err;
          } finally {
            try {
              if (!_iteratorNormalCompletion2 && _iterator2["return"] != null) {
                _iterator2["return"]();
              }
            } finally {
              if (_didIteratorError2) {
                throw _iteratorError2;
              }
            }
          }

          return node.isEndOfWord;
        },
      },
      {
        key: "startsWith",
        value: function startsWith(prefix) {
          var node = this.root;
          var _iteratorNormalCompletion3 = true;
          var _didIteratorError3 = false;
          var _iteratorError3 = undefined;

          try {
            for (
              var _iterator3 = prefix[Symbol.iterator](), _step3;
              !(_iteratorNormalCompletion3 = (_step3 = _iterator3.next()).done);
              _iteratorNormalCompletion3 = true
            ) {
              var _char3 = _step3.value;

              if (!node.children[_char3]) {
                return false;
              }

              node = node.children[_char3];
            }
          } catch (err) {
            _didIteratorError3 = true;
            _iteratorError3 = err;
          } finally {
            try {
              if (!_iteratorNormalCompletion3 && _iterator3["return"] != null) {
                _iterator3["return"]();
              }
            } finally {
              if (_didIteratorError3) {
                throw _iteratorError3;
              }
            }
          }

          return true;
        },
      },
    ]);

    return Trie;
  })();

var trie = new Trie();
trie.insert("apple");
console.log(trie.search("apple")); // 输出: true

console.log(trie.search("app")); // 输出: false

console.log(trie.startsWith("app")); // 输出: true

trie.insert("app");
console.log(trie.search("app")); // 输出: true
