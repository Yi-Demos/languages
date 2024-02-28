"use strict";

/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function argumentsLength() {
  for (
    var _len = arguments.length, args = new Array(_len), _key = 0;
    _key < _len;
    _key++
  ) {
    args[_key] = arguments[_key];
  }

  // Method 1:
  // return args.length;
  // Method 2:
  return [].concat(args).length;
};
/**
 * argumentsLength(1, 2, 3); // 3
 */
