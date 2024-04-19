"use strict";

// bill: an array of integers representing the cost of each item ordered
// k: an integer representing the zero-based index of the item Anna doesn't eat
// b: the amount of money that Anna contributed to the bill
function bonAppetit(bill, k, b) {
  // Write your code here
  var sum = 0;

  for (var i = 0; i < bill.length; i++) {
    if (i !== k) sum += bill[i];
  }

  var payment = sum / 2;

  if (payment >= b) {
    console.log("Bon Appetit");
  } else {
    console.log(b - payment);
  }
}

bonAppetit([3, 10, 2, 9], 1, 12); // 5

bonAppetit([3, 10, 2, 9], 1, 7); // Bon Appetit