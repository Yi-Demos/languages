"use strict";

/**
 * @return {Function}
 */
var createHelloWorld = function createHelloWorld() {
  return function () {
    return "Hello World";
  };
};
/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
