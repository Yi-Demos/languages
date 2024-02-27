"use strict";

/**
 * @param {string} val
 * @return {Object}
 */
var expect = function expect(val) {
  return {
    toBe: function toBe(val2) {
      if (val === val2) return true;
      throw new Error("Not Equal");
    },
    notToBe: function notToBe(val2) {
      if (val !== val2) return true;
      throw new Error("Equal");
    },
  };
};
/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
