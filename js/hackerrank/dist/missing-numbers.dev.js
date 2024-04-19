"use strict";

var arr = [203, 204, 205, 206, 207, 208, 203, 204, 205, 206];
var brr = [203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204];
var ans = [];
var c = arr.length;

while (c > 0) {
  if (arr[c] === brr[c]) {
    c--;
  } else {
    brr;
  }
}

console.log(ans);