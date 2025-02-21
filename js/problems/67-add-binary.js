/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
  let carry = 0;
  let strings = "";
  let i = a.length - 1;
  let j = b.length - 1;

  while (i >= 0 || j >= 0 || carry) {
    let sum = 0;

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
