"use strict";

/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function once(fn) {
  var called = false;
  return function () {
    if (called) return undefined;
    called = true;
    return fn.apply(void 0, arguments);
  };
};
/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
