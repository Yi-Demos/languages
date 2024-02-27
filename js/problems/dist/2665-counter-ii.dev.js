"use strict";

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function createCounter(init) {
  var cur = init;
  return {
    increment: function increment() {
      return ++cur;
    },
    decrement: function decrement() {
      return --cur;
    },
    reset: function reset() {
      return (cur = init);
    },
  };
};
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
