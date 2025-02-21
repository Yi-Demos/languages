"use strict";

/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function addBinary(a, b) {
  var carry = 0;
  var strings = "";
  var i = a.length - 1;
  var j = b.length - 1;

  while (i >= 0 || j >= 0 || carry) {
    var sum = 0;

    if (carry > 0) {
      sum += carry;
      carry = 0;
    }

    if (i >= 0) sum += Number(a[i]);
    if (j >= 0) sum += Number(b[j]);
    if (sum > 1) carry = 1;
    sum = sum % 2;
    strings = sum.toString() + strings;
    i--;
    j--;
  }

  return strings;
};
