"use strict";

function _classCallCheck(instance, Constructor) {
  if (!(instance instanceof Constructor)) {
    throw new TypeError("Cannot call a class as a function");
  }
}

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

// https://break0344.medium.com/data-structures-and-algorithms-9-graph-2079e5bc4661
var Graph =
  /*#__PURE__*/
  (function () {
    function Graph() {
      _classCallCheck(this, Graph);

      this.adjacencyList = {};
    }

    _createClass(Graph, [
      {
        key: "addVertex",
        value: function addVertex(vertex) {
          if (!this.adjacencyList[vertex]) {
            this.adjacencyList[vertex] = [];
          }
        },
      },
      {
        key: "addEdge",
        value: function addEdge(v1, v2) {
          this.adjacencyList[v1].push(v2);
          this.adjacencyList[v2].push(v1);
        },
      },
      {
        key: "removeEdge",
        value: function removeEdge(v1, v2) {
          this.adjacencyList[v1] = this.adjacencyList[v1].filter(function (v) {
            return v !== v2;
          });
          this.adjacencyList[v2] = this.adjacencyList[v2].filter(function (v) {
            return v !== v1;
          });
        },
      },
      {
        key: "removeVertex",
        value: function removeVertex(vertex) {
          while (this.adjacencyList[vertex].length) {
            var adjacencyVertex = this.adjacencyList[vertex].pop();
            this.removeEdge(vertex, adjacencyVertex);
          }

          delete this.adjacencyList[vertex];
        },
      },
      {
        key: "depthFirstRecursive",
        value: function depthFirstRecursive(start) {
          var result = [];
          var visited = {};
          var adjacencyList = this.adjacencyList;

          (function dfs(vertex) {
            if (!vertex) return null;
            visited[vertex] = true;
            result.push(vertex);
            adjacencyList[vertex].forEach(function (neighbor) {
              if (!visited[neighbor]) {
                return dfs(neighbor);
              }
            });
          })(start);

          return result;
        },
      },
      {
        key: "depthFirstIterative",
        value: function depthFirstIterative(start) {
          var stack = [start];
          var result = [];
          var visited = {};
          var currentVertex;
          visited[start] = true;

          while (stack.length) {
            currentVertex = stack.pop();
            result.push(currentVertex);
            this.adjacencyList[currentVertex].forEach(function (neighbor) {
              if (!visited[neighbor]) {
                visited[neighbor] = true;
                stack.push(neighbor);
              }
            });
          }

          return result;
        },
      },
      {
        key: "breadthFirst",
        value: function breadthFirst(start) {
          var queue = [start];
          var result = [];
          var visited = {};
          var currentVertex;
          visited[start] = true;

          while (queue.length) {
            currentVertex = queue.shift();
            result.push(currentVertex);
            this.adjacencyList[currentVertex].forEach(function (neighbor) {
              if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push(neighbor);
              }
            });
          }

          return result;
        },
      },
    ]);

    return Graph;
  })();
